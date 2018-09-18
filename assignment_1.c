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
#include "ioctl_struct.h"

#define DEVICE_0_NAME "ht530_tbl_0"
#define DEVICE_1_NAME "ht530_tbl_1"
#define CLASS_NAME    "ht530_drv"

#define find_node(hash, hashtable_node_obj, hashtable_pt, key) 					\
	hash_for_each_possible(hash, hashtable_node_obj, hashtable_pt, key ) 

#define iterate_bucket(hash, hashtable_node_obj, bucket_no, member) \
	if(bucket_no > HASH_SIZE(hash)) return -1; \
	hlist_for_each_entry(hashtable_node_obj, &hash[bucket_no], member)

static struct hashtable_object{
	struct data obj;
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

int device_open(struct inode *inode, struct file *file){
	struct hashtable_dev *hashtable_dev;
	printk(KERN_INFO "%s opening device", hashtable_dev->device_name);
	hashtable_dev = container_of(inode->i_cdev, struct hashtable_dev, cdev);
	file->private_data = hashtable_dev;
	printk(KERN_INFO "%s device is opened", hashtable_dev->device_name);
	return 0;
}

/**
struct hashtable_object* find_node(struct hlist_head* hash, struct data *object) {
	struct hashtable_object *obj;
	hash_for_each_possible(hash, obj, hashtable_pt, object->key ) {
		if(obj->obj.key == object->key){
			return obj;
		}
	}
	return NULL;
}
**/

ssize_t read_hash_table(struct file *file, char *buff, size_t size, loff_t *lt){
        int pointer, key;
        char out[sizeof(struct data)];
	struct hashtable_object *node;
	struct hashtable_dev *table = file->private_data;
	struct data object;
	copy_from_user(&object, (struct data*)buff, sizeof(object));	
	printk(KERN_INFO "Reading from hashtable of device %s", table->device_name);
	key = object.key;
	find_node(table->hash, node, hashtable_pt,key) {
		printk(KERN_INFO "Node Found");		
		if(node->obj.key == key) break;
	}

	if(node == NULL){
	printk(KERN_INFO "Node Not Found ");
           return -1;
	}
	printk(KERN_INFO "Node Found %d", node->obj.key);
        memcpy(out, &node->obj, sizeof(struct data));
        for(pointer = 0; pointer<sizeof(struct data);pointer++){
	  put_user(out[pointer], buff++);
        }
	return sizeof(node->obj);
}

ssize_t insert_value(struct file *file, const char *buff, size_t size, loff_t *lt){
	int key;
	struct hashtable_object *node;
	struct hashtable_dev *table = file->private_data;
	struct data object;
	copy_from_user(&object, (struct data*)buff, sizeof(object));	
	printk(KERN_INFO "Adding Value %d", object.key);
	key = object.key;
	find_node(table->hash, node, hashtable_pt, key){
		printk(KERN_INFO "Node *** %d", node->obj.key);
		if(node->obj.key == key){ 				
			break;							        
		}
	}
	if(node != NULL) {
		printk(KERN_INFO "Node with key %d found", object.key);
		if(object.data == 0) {
			printk(KERN_INFO "Deleting node with value %d", object.data);
			hash_del(&node->hashtable_pt);
		}
		else {
			printk(KERN_INFO "replacing node with value %d", object.data);
			node->obj.data = object.data;
		}
	}
	else {
		printk(KERN_INFO "Adding new node with value %d", object.data);
		struct hashtable_object element;
		element.obj.key = object.key;
		element.obj.data = object.data;
		hash_add(table->hash, &element.hashtable_pt, element.obj.key);
	}

	return 0;

}

int release(struct inode *inode, struct file *file){
	struct hashtable_dev *table = file->private_data;
	printk(KERN_INFO "closing device %s", table->device_name);
	return 0;
}

long ioctl_handle(struct file *file, unsigned int command, unsigned long j){
	struct dump_arg object;
	int bucket_no, no_nodes;
	struct hashtable_object *node;
	struct hashtable_dev *table = file->private_data;
	switch(command){
		case IOCTL_DUMP:
				copy_from_user(&object, (struct dump_arg*)j, sizeof(object));
				
				bucket_no = object.n;
				no_nodes = 0;
				iterate_bucket(table->hash, node, bucket_no, hashtable_pt) {
					if(no_nodes >= 8) break;
					object.object_array[no_nodes].data = node->obj.data;
					object.object_array[no_nodes].key = node->obj.key;
					no_nodes++;
					object.n = no_nodes;			
				}
				if (copy_to_user((struct dump_arg*)j, &object, sizeof(object))) {
					return -EACCES;				
				}
				break;	
	        default:
				return -EINVAL;	
	}
	return 0;
	
}

static struct file_operations fop = {
	.read = read_hash_table,
	.open = device_open,
	.write = insert_value,
	.release = release,
	.unlocked_ioctl = ioctl_handle,
};

int __init hashtable_driver_init(void) {

	int rt;

	if(alloc_chrdev_region(&device_0_number, 0, 1, DEVICE_0_NAME) < 0){
	   printk(KERN_DEBUG "Can't Register Device %s. Error while allocating region\n",DEVICE_0_NAME);
	   return -1;
	}
	printk(KERN_INFO "Device %s is registered successfully.\n",DEVICE_0_NAME);

	if(alloc_chrdev_region(&device_1_number, 0, 1, DEVICE_1_NAME) < 0){
	   printk(KERN_INFO "Can't Register Device %s. Error while allocating region\n",DEVICE_1_NAME);
	   return -1;
	}
	printk(KERN_INFO "Device %s is registered successfully.\n",DEVICE_1_NAME);

	hashtable_class = class_create(THIS_MODULE, CLASS_NAME);
	device_0_struct = kmalloc(sizeof(struct hashtable_dev),GFP_KERNEL);
	device_1_struct = kmalloc(sizeof(struct hashtable_dev),GFP_KERNEL);
	
	if(!device_0_struct || !device_1_struct) {
	   printk(KERN_INFO "Unable to allocate memory\n"); return -ENOMEM;
	}
	
	hash_init(device_1_struct->hash);
	hash_init(device_0_struct->hash);

	sprintf(device_0_struct->device_name, DEVICE_0_NAME);
	sprintf(device_1_struct->device_name, DEVICE_1_NAME);

	cdev_init(&device_0_struct->cdev, &fop);
	device_0_struct->cdev.owner = THIS_MODULE;
	cdev_init(&device_1_struct->cdev, &fop);
	device_1_struct->cdev.owner = THIS_MODULE;

	rt = cdev_add(&device_0_struct->cdev, device_0_number, 1);
	if(rt < 0){
	   printk(KERN_INFO "Error adding device %s", DEVICE_0_NAME);
	   return rt;
	}
	rt = cdev_add(&device_1_struct->cdev, device_0_number, 1);
	if(rt < 0){
	   printk(KERN_INFO "Error adding device %s", DEVICE_1_NAME);
	   return rt;
	}

	hashtable_device_0 = device_create(hashtable_class, NULL, MKDEV(MAJOR(device_0_number), 0), NULL, DEVICE_0_NAME);
	hashtable_device_1 = device_create(hashtable_class, NULL, MKDEV(MAJOR(device_1_number), 0), NULL, DEVICE_1_NAME);

	printk(KERN_INFO "Driver %s is initialised", CLASS_NAME);
	return 0;

}

void __exit exit_device(void){

	unregister_chrdev_region(device_0_number, 1);
	unregister_chrdev_region(device_1_number, 1);

	device_destroy(hashtable_class, MKDEV(MAJOR(device_0_number), 0));
	device_destroy(hashtable_class, MKDEV(MAJOR(device_1_number), 0));
	cdev_del(&device_0_struct->cdev);
	cdev_del(&device_0_struct->cdev);
	kfree(device_0_struct);
	kfree(device_1_struct);
	class_destroy(hashtable_class);
	
	printk(KERN_INFO "Existing device");

}

module_init(hashtable_driver_init);
module_exit(exit_device);
MODULE_LICENSE("GPL v2");


