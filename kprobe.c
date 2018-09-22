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
#include <linux/rwlock_types.h>

#define DEVICE_NAME "Mprobe"
#define CLASS_NAME  "Mprobe"

rwlock_t tasklist_lock;

static struct mprobe_dev {
	struct cdev cdev;
	char device_name[15];
};

static struct mprobe_dev *mprobe_device_struct;
static dev_t mprobe_device_number;
struct class *mprobe_class;
static struct device *mprobe_device;

static unsigned int counter = 0;

unsigned long long rdtsc_get(void){
   unsigned a, d;

   __asm__ volatile("rdtsc" : "=a" (a), "=d" (d));

   return ((unsigned long long)a) | (((unsigned long long)d) << 32);
}

int Pre_Handler(struct kprobe *p, struct pt_regs *regs){
    struct task_struct *task_1;
    task_1 = current_thread_info();
    read_lock(&tasklist_lock);
    printk("pid =%d Time stamp=%llu", task_1->pid, rdtsc_get());
    read_unlock(&tasklist_lock);
    printk(KERN_INFO "Pre_Handler: pre_handler: p->addr = 0x%p,\n",p->addr);
    return 0;
}

void Post_Handler(struct kprobe *p, struct pt_regs *regs, unsigned long flags){
    printk(KERN_INFO "Post_Handler: counter=%u\n",counter++);
}

static struct kprobe kp;

ssize_t read_from_buffer(struct file *file, char *buff, size_t size, loff_t *lt){

}

ssize_t insert_probe(struct file *file, const char *buff, size_t size, loff_t *lt){

    unsigned long address;
    address = kallsyms_lookup_name("insert_value");
    printk(KERN_INFO "Address of write function 0x%p", address);
    printk("module inserted\n ");
    kp.pre_handler = Pre_Handler;
    kp.post_handler = Post_Handler;
    kp.addr = (kprobe_opcode_t *)address;
    register_kprobe(&kp);
    return 0;
}

int device_open(struct inode *inode, struct file *file){
	struct mprobe_dev *mprobe_dev;
	printk(KERN_INFO "%s opening device", mprobe_dev->device_name);
	mprobe_dev = container_of(inode->i_cdev, struct mprobe_dev, cdev);
	file->private_data = mprobe_dev;
	printk(KERN_INFO "%s device is opened", mprobe_dev->device_name);
	return 0;
}


static struct file_operations fop = {
	.open = device_open,
	.read = read_from_buffer,
	.write = insert_probe
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
	   printk(KERN_INFO "Error adding device %s", DEVICE_NAME);
	   return rt;
	}

	mprobe_device = device_create(mprobe_class, NULL, MKDEV(MAJOR(mprobe_device_number), 0), NULL, DEVICE_NAME);

	printk(KERN_INFO "Driver %s is initialised", CLASS_NAME);
	return 0;

}

void __exit exit_mprobe_device(void){

	unregister_kprobe(&kp);

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
