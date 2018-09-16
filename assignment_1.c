#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/types.h>
#include <linux/slab.h>
#include <asm/uaccess.h>
#include <linux/device.h>
#include <linux/hashtable.h>

#define DEVICE_0_NAME "ht530_tbl_0"
#define DEVICE_1_NAME "ht530_tbl_1"
#define CLASS_NAME    "ht530_drv"

static struct data {
	int key;
	int data;
};

static struct hashtable_object{
	struct data obj	
	struct hlist_node hashtable_pt;
};

static struct hashtable_dev {
	struct cdev cdev;
	char device_name[15];
	struct hlist_head hash[128];
};

static struct hashtable_dev *device_0_struct, *device_1_struct;
static dev_t device_0_number, device_1_number;
struct class *hashtable_class;
static struct device *hashtable_device_0, *hashtable_device_1;

ssize_t device_open(struct inode *inode, struct file *file){
	struct hastbale_dev* hashtable_dev;
	hashtable_dev = container_of(inode->i_cdev, struct hashtable_dev, cdev);
	file->private_data = hashtable_dev;
	printk(KERNEL_INFO "%s opening device", hashtable_dev->name);
	return 0;
}

ssize_t read_hash_table(struct file *file, char __user * user, size_t size, loff_t *lt){
	
	return 0;

}

ssize_t insert_value(struct file *file, const char *buf, size_t size, loff_t *lt){
	int bkt;	
	struct hashtable_dev *table = file->private_data;
	
	struct data *object = (struct data*) buff;
	
	struct hashable_object *node = find_node(table->hash, object);
	
	if(node != null) {
		if(object->obj.data ==0) {
			hash_del(node);
		}
		else {
			node->data = object->data; 	
		}
	}
	else {
		struct hashtable_object element;
		element.obj.key = object->key;
		element.obj.data = object->data;
		hash_add(table->hash, &element.next, element.key);
	}
	
	return 0;
	
}

struct hashable_object find(struct hlist_head, strcut data *object) {
	struct hashtable_object *obj;
	hash_for_each_possible(table->hash, obj, hashtable_pt, object->key ) {
		if(obj->data == object->data){
			return obj;file
		}	
	}
}

int release(struct inode *inode, struct file *file){
	struct hashtable_dev *table = file->private_data;
	printk(KERNEL_INFO "closing device %s", table->name);	
	return 0;
}

long dump_values(struct file *file, unsigned int i, unsigned long j){return 0;}

static struct file_operations fop = {
	.read = read_hash_table,
	.open = device_open,
	.write = insert_value,
	.release = release,
	.unlocked_ioctl = dump_values,	
};

int __init hashtable_driver_init(void) {
	
	int rt;

	if(alloc_chrdev_region(&device_0_number, 0, 1, DEVICE_0_NAME) < 0){
	   printk(KERN_DEBUG "Can't Register Device %s. Error while allocating region\n",DEVICE_0_NAME);
	   return -1;
	}
	printk(KERN_INFO "Device %s is registered successfully.\n",DEVICE_0_NAME);

	if(alloc_chrdev_region(&device_1_number, 0, 1, DEVICE_1_NAME) < 0){
	   printk(KERN_DEBUG "Can't Register Device %s. Error while allocating region\n",DEVICE_1_NAME);
	   return -1;
	}
	printk(KERN_INFO "Device %s is registered successfully.\n",DEVICE_1_NAME);
	
	hashtable_class = class_create(THIS_MODULE, CLASS_NAME);
	device_0_struct = kmalloc(sizeof(struct hashtable_dev),GFP_KERNEL);
	device_1_struct = kmalloc(sizeof(struct hashtable_dev),GFP_KERNEL);
	
	if(!device_0_struct || !device_1_struct) {
	   printk(KERN_DEBUG "Unable to allocate memory\n"); return -ENOMEM;
	}	
	
	sprintf(device_0_struct->device_name, DEVICE_0_NAME);
	sprintf(device_1_struct->device_name, DEVICE_1_NAME);
	
	cdev_init(&device_0_struct->cdev, &fop);
	device_0_struct->cdev.owner = THIS_MODULE;
	cdev_init(&device_1_struct->cdev, &fop);
	device_1_struct->cdev.owner = THIS_MODULE;

	rt = cdev_add(&device_0_struct->cdev, device_0_number, 1);
	if(rt < 0){
	   printk(KERN_DEBUG "Error adding device %s", DEVICE_0_NAME);
	   return rt;
	}
	rt = cdev_add(&device_1_struct->cdev, device_0_number, 1);
	if(rt < 0){
	   printk(KERN_DEBUG "Error adding device %s", DEVICE_1_NAME);	
	   return rt;	
	}

	hashtable_device_0 = device_create(hashtable_class, NULL, MKDEV(MAJOR(device_0_number), 0), NULL, DEVICE_0_NAME);
	hashtable_device_1 = device_create(hashtable_class, NULL, MKDEV(MAJOR(device_1_number), 0), NULL, DEVICE_1_NAME);
	
	printk(KERN_INFO "Driver %s is initialised", CLASS_NAME);
	return 0;	
	
}

int __exit exit_device(void){

	unregister_chrdev_region(device_0_number, 1);
	unregister_chrdev_region(device_1_number, 1);
	
	device_destroy(hashtable_class, MKDEV(MAJOR(device_0_number), 0));
	device_destroy(hashtable_class, MKDEV(MAJOR(device_1_number), 0));
	cdev_del(&device_0_struct->cdev);
	cdev_del(&device_0_struct->cdev);
	kfree(&device_0_struct->cdev);
	kfree(&device_1_struct->cdev);
	class_destroy(hashtable_class);
	
	return 0;

}	
	


