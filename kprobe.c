#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/types.h>
#include <linux/slab.h>
#include <linux/device.h>
#include <linux/hashtable.h>
#include <asm-generic/errno.h>
#include <linux/uaccess.h>
#include <linux/string.h>
#include<linux/kprobes.h>
#include "ring_buffer.h"

/**
    macro for iterating the bucket of hashtable
*/
#define iterate_bucket(hash, hashtable_node_obj, bucket_no, member)    \
	hlist_for_each_entry(hashtable_node_obj, &hash[bucket_no], member)

#define DEVICE_NAME "Mprobe"
#define CLASS_NAME  "Mprobe"

#define IOCTL_APP_TYPE 79
#define IOCTL_REMOVE_PROBES _IOR(IOCTL_APP_TYPE, 1, int)     // ioctl to remove kprobes


/**
    structure for Mprobe driver
*/
struct mprobe_dev {
	struct cdev cdev;
	char device_name[15];
	struct kprobe **kp;   //array of kprobes
};


struct ring_buffer_data buffer[MAX_RING_BUFFER_SIZE];     // ring_buffer
static DEFINE_MUTEX(kprobe_lock);

static struct mprobe_dev *mprobe_device_struct;
static dev_t mprobe_device_number;
struct class *mprobe_class;
static struct device *mprobe_device;
int total_kprobes = 0;

unsigned long long rdtsc_get(void){
   unsigned a, d;

   __asm__ volatile("rdtsc" : "=a" (a), "=d" (d));

   return ((unsigned long long)a) | (((unsigned long long)d) << 32);
}


/**

	Iterating over the bucket and adding trace to the ring buffer
*/

struct dump_arg* iterate(struct hlist_head *hash, int bucket_no) {
	struct dump_arg *object = NULL;
	int no_nodes = 0;
	struct hashtable_object *node = NULL;
	struct object_data current_node;
	printk(KERN_INFO "DUMPING ALL NODES OF BUCKET BEFORE ADDING\n");
	object = kmalloc(sizeof(struct dump_arg), GFP_KERNEL);
	iterate_bucket(hash, node, bucket_no, hashtable_pt) {  // iterate over all the objects in nth bucket
		if(no_nodes >= 8) break;                       // tracing only 8 nodes of bucket
		current_node = node->obj;
		object->object_array[no_nodes].data = current_node.data;
		object->object_array[no_nodes].key = current_node.key;
		no_nodes++;
	}
	object->no_nodes = no_nodes;
	return object;
}


/**

	Pre handle of the kprobe
*/

int Pre_Handler(struct kprobe *p, struct pt_regs *regs){
    struct object_data *object = (struct object_data *)(regs->dx);
    struct file *file = (struct file*)(regs->ax);                            // first argument to the function (struct file*)
    struct hlist_head *hash = (struct hlist_head *) (file->private_data + sizeof(struct cdev) + sizeof(char)*16);   // calculating the hlist_head from file->private_data	
    struct dump_arg *bucket = iterate(hash, hash_min(object->key, ilog2(7)));
    write_to_buffer(buffer, 0, rdtsc_get(), (long unsigned int)p->addr, bucket);
    return 0;
}

void Post_Handler(struct kprobe *p, struct pt_regs *regs, unsigned long flags){
}


/**

	Read the latest trace of current hit from the ring buffer
*/

ssize_t read_from_buffer(struct file *file, char *buff, size_t size, loff_t *lt){
	
	struct ring_buffer_data object;
	int index = read_from_ring_buffer();
	if(index < 0){
		return -EINVAL;	
	}
	object = buffer[index];
	if (copy_to_user((struct ring_buffer_data*)buff, &object, sizeof(struct ring_buffer_data))) {
		return -EACCES;
	}
	return sizeof(buff);
}



/**

	Insert kprobe at offset in insert_value function 
*/


ssize_t insert_probe(struct file *file, const char *buff, size_t size, loff_t *lt){

    unsigned long address;
    int offset;
    struct mprobe_dev *kprobe_struct = file->private_data;	
    address = kallsyms_lookup_name("insert_value");
    copy_from_user(&offset, (int*)buff, sizeof(int));
    printk(KERN_INFO "Address of write function 0x%p\n", (void*)(address + offset));
    printk("module inserted\n ");
    mutex_lock(&kprobe_lock);
    kprobe_struct->kp[total_kprobes] = (struct kprobe*)kmalloc(sizeof(struct kprobe), GFP_KERNEL);
    kprobe_struct->kp[total_kprobes]->pre_handler = Pre_Handler;
    kprobe_struct->kp[total_kprobes]->post_handler = Post_Handler;
    kprobe_struct->kp[total_kprobes]->addr = (kprobe_opcode_t *)address + offset;
    if(register_kprobe( kprobe_struct->kp[total_kprobes])){
	printk(KERN_INFO "Error while setting kprobe on address %p\n", (void*)(address + offset));
    }else{
	total_kprobes++;
    }   
    mutex_unlock(&kprobe_lock);
    return 0;
}



int device_open(struct inode *inode, struct file *file){
	struct mprobe_dev *mprobe_dev = NULL;
	printk(KERN_INFO "%s opening device\n", mprobe_dev->device_name);
	mprobe_dev = container_of(inode->i_cdev, struct mprobe_dev, cdev);
	file->private_data = mprobe_dev;
	printk(KERN_INFO "%s device is opened\n", mprobe_dev->device_name);
	return 0;
}


/**

	IOCTL for removing all the kprobes set till time
*/
long ioctl_handle(struct file *file, unsigned int command, unsigned long ioctl_param){
	switch(command){
		case IOCTL_REMOVE_PROBES:
					mutex_lock(&kprobe_lock);
					unregister_kprobes(mprobe_device_struct->kp, total_kprobes);
					total_kprobes=0;
					mutex_unlock(&kprobe_lock);
					break;
		default: return -EINVAL;		
	}

return 1;
}


static struct file_operations fop = {
	.open = device_open,
	.read = read_from_buffer,
	.write = insert_probe,
	.unlocked_ioctl = ioctl_handle
};

int __init mprobe_driver_init(void) {

	int rt;

	if(alloc_chrdev_region(&mprobe_device_number, 0, 1, DEVICE_NAME) < 0){
	   printk(KERN_DEBUG "Can't Register Device %s. Error while allocating region\n",DEVICE_NAME);
	   return -1;
	}
	printk(KERN_INFO "Device %s is registered successfully.\n",DEVICE_NAME);

	mprobe_class = class_create(THIS_MODULE, CLASS_NAME);
	mprobe_device_struct = kmalloc(sizeof(struct mprobe_dev),GFP_KERNEL);

	if(!mprobe_device_struct) {
	   printk(KERN_INFO "Unable to allocate memory\n"); return -ENOMEM;
	}

	sprintf(mprobe_device_struct->device_name, DEVICE_NAME);

	cdev_init(&mprobe_device_struct->cdev, &fop);
	mprobe_device_struct->cdev.owner = THIS_MODULE;

	rt = cdev_add(&mprobe_device_struct->cdev, mprobe_device_number, 1);
	if(rt < 0){
	   printk(KERN_INFO "Error adding device %s\n", DEVICE_NAME);
	   return rt;
	}

	mprobe_device = device_create(mprobe_class, NULL, MKDEV(MAJOR(mprobe_device_number), 0), NULL, DEVICE_NAME);
	
	mprobe_device_struct->kp =(struct kprobe**)kmalloc(sizeof(struct kprobe*)*100, GFP_KERNEL);

	printk(KERN_INFO "Driver %s is initialised\n", CLASS_NAME);
	return 0;

}

void __exit exit_mprobe_device(void){
	
        mutex_lock(&kprobe_lock);
	printk(KERN_INFO "Total Probes %d\n", total_kprobes);
	unregister_kprobes(mprobe_device_struct->kp, total_kprobes);
	total_kprobes=0;
	mutex_unlock(&kprobe_lock);		
	unregister_chrdev_region(mprobe_device_number, 1);

	device_destroy(mprobe_class, MKDEV(MAJOR(mprobe_device_number), 0));

	cdev_del(&mprobe_device_struct->cdev);

	kfree(mprobe_device_struct);

	class_destroy(mprobe_class);

	printk(KERN_INFO "Removing device");
	
	

}

module_init(mprobe_driver_init);
module_exit(exit_mprobe_device);
MODULE_LICENSE("GPL v2");
