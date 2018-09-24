#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/types.h>
#include <linux/slab.h>
#include <linux/device.h>
#include <linux/errno.h>
#include <linux/uaccess.h>
#include <linux/string.h>
#include<linux/mutex.h>
#include "hashtable_object.h"
#include "ht530_drv.h"

static DEFINE_MUTEX(hashtable_lock);


/**
    hashtable_dev : struct for device to manage hashtable
*/
struct hashtable_dev {
	struct cdev cdev;
	char device_name[15];
	struct hlist_head hash[7];
};

static struct hashtable_dev *device_0_struct, *device_1_struct;
static dev_t device_0_number, device_1_number;
struct class *hashtable_class;
static struct device *hashtable_device_0, *hashtable_device_1;

/**
    opens device for operations
*/
int device_open(struct inode *inode, struct file *file){
	struct hashtable_dev *hashtable_dev = NULL;
	hashtable_dev = container_of(inode->i_cdev, struct hashtable_dev, cdev);
	file->private_data = hashtable_dev;
	printk(KERN_INFO "%s device is opened", hashtable_dev->device_name);
	return 0;
}

/**
 * find_key - finds a key in a hashtable
 * @node: * of struct of bucket node
 * @table: hashtable
 * @object: object_data struct containing key to find
 */

struct hashtable_object* find_key(struct hashtable_object *node, struct hashtable_dev *table, struct object_data *object) {
    bool found = false;
    mutex_lock(&hashtable_lock);
    find_node(table->hash, node, hashtable_pt,object->key) {

        const struct object_data current_node = node->obj;
        if(current_node.key == object->key) {   // if key is found in a bucket then break
            printk(KERN_INFO "Node Found\n");
            found = true;
            break;
        }

	}
	mutex_unlock(&hashtable_lock);
	if(found){
         return node;
	}

	return NULL;
}


ssize_t read_hash_table(struct file *file, char *buff, size_t size, loff_t *lt){

	struct hashtable_object *node = NULL;
	struct hashtable_dev *table = file->private_data;
	struct object_data *object = NULL;

   	object = kmalloc(sizeof(struct object_data), GFP_KERNEL);
	copy_from_user(object, (struct object_data*)buff, sizeof(struct object_data));
	printk(KERN_INFO "Reading from hashtable of device %s\n", table->device_name);

   	node = find_key(node,table,object);  // finding key

	if(node == NULL){
	   printk(KERN_INFO "Node Not Found "); // if node not found return -EINVAL;
           kfree(object);
           return -EINVAL;
	}

	printk(KERN_INFO "Node Found with key %d and value %d\n", node->obj.key, node->obj.data);
	copy_to_user((struct object_data*)buff, object, sizeof(struct object_data));

        kfree(object);
	return sizeof(node->obj);
}

ssize_t insert_value(struct file *file, const char *buff, size_t size, loff_t *lt){
	struct hashtable_object *node = NULL;
	struct hashtable_dev *table = file->private_data;
	struct object_data *object = NULL;
	struct hashtable_object *element = NULL;

	object = kmalloc(sizeof(struct object_data), GFP_KERNEL);
	copy_from_user(object, (struct object_data*)buff, sizeof(struct object_data));

	node = find_key(node,table,object);
	if(node != NULL) {
        // node with key found in hashtable

		printk(KERN_INFO "Node Found with key %d and value %d\n", node->obj.key, node->obj.data);
		if(object->data == 0) {

		/**
            if data field of an object is zero then delete the node from hashtable
		*/
			printk(KERN_INFO "Deleting node with key %d\n", object->key);
			mutex_lock(&hashtable_lock);
			hash_del(&node->hashtable_pt);
			mutex_unlock(&hashtable_lock);
			kfree(object);
			return 0;
		}
		else {
        /**
            if data field of an object is non zero then replace the node value with new object data value
		*/
			printk(KERN_INFO "replacing node with value %d\n", object->data);
			mutex_lock(&hashtable_lock);
			node->obj.data = object->data;
			mutex_unlock(&hashtable_lock);
		}
	}
	else {
        // node with key not found in hashtable
        if(object->data == 0){
            /**
                Not creating bucket object if data field is zero and returning with invalid value error
            */
            printk(KERN_INFO "Node not added as data is zero");
            kfree(object);
            return -EINVAL;
        }
		element = kmalloc(sizeof(struct hashtable_object), GFP_KERNEL);
		INIT_HLIST_NODE(&element->hashtable_pt);  // initialising the hlist_node to NULL
		element->obj.key = object->key;
		element->obj.data = object->data;
		/**
                creating bucket object if data field is non zero and adding is to the hash table
        */
		printk(KERN_INFO "Adding new node with value %d and key %d at bucket %d\n", element->obj.data, element->obj.key, hash_min(element->obj.key, HASH_BITS(table->hash)));
		mutex_lock(&hashtable_lock);
		hash_add_rcu(table->hash, &element->hashtable_pt, element->obj.key);
		mutex_unlock(&hashtable_lock);
		node = element;
	}
    if (copy_to_user((struct object_data*)buff, node, sizeof(struct object_data))) {
        kfree(object);
        return -EACCES;
	}
	kfree(object);
	return sizeof(buff);

}

int release(struct inode *inode, struct file *file){
	struct hashtable_dev *table = file->private_data;
	printk(KERN_INFO "closing device %s\n", table->device_name);
	return 0;
}

long ioctl_handle(struct file *file, unsigned int command, unsigned long ioctl_param){
	struct dump_arg *object = NULL;
	struct dump_all *all_objects = NULL;
	int bucket_no, no_nodes;
	long size_of_table;
	struct hashtable_object *node = NULL;
	struct hlist_node *tmp = NULL;
	struct hashtable_dev *table = file->private_data;
	struct object_data current_node;
	switch(command){
		case IOCTL_DUMP:
		        /**
		            return first 8 objects from the nth hashtable bucket
		        */
		        printk(KERN_INFO "Inside IOCTL dump function\n");
		        object = kmalloc(sizeof(struct dump_arg), GFP_KERNEL);
			copy_from_user(object, (struct dump_arg*)ioctl_param, sizeof(struct dump_arg));

			bucket_no = object->n;
			if(bucket_no > (1 << HASH_SIZE(table->hash))) return -EINVAL;
			no_nodes = 0;
			mutex_lock(&hashtable_lock);
			iterate_bucket(table->hash, node, bucket_no, hashtable_pt) {  // iterate over all the objects in nth bucket
				if(no_nodes >= 8) break;
				current_node = node->obj;
				printk(KERN_INFO "Dumping new node with value %d and key %d\n", current_node.data, current_node.key);
				object->object_array[no_nodes].data = current_node.data;
				object->object_array[no_nodes].key = current_node.key;
				no_nodes++;
			}
			mutex_unlock(&hashtable_lock);
			object->no_nodes = no_nodes;

			if (copy_to_user((struct dump_arg*)ioctl_param, object, sizeof(struct dump_arg))) {
            		        kfree(object);
				return -EACCES;
			}
			break;
		case IOCTL_GET_SIZE:
		        /**
		            return size of hashtable to user program
		        */
		        printk(KERN_INFO "Inside IOCTL Get size function\n");
		        size_of_table = (1 << HASH_SIZE(table->hash));
		        printk(KERN_INFO "hashtable SIZe %ld\n", size_of_table);
			return size_of_table;
		case IOCTL_DUMP_ALL:
		        /**
		            return all the objects in hashtable and total number of objects
		        */
		        no_nodes = 0;
		        printk(KERN_INFO "Inside IOCTL DUMP ALL function\n");
		        all_objects= kmalloc(sizeof(struct dump_all), GFP_KERNEL);
		        copy_from_user(all_objects,(struct dump_arg*)ioctl_param, sizeof(struct dump_all));
		        mutex_lock(&hashtable_lock);
		        traverse(table->hash, bucket_no, tmp,node,hashtable_pt) {      // traverse all the objects in the hashtable
		            current_node = node->obj;
		            printk(KERN_INFO "Dumping new node with value %d and key %d\n", current_node.data, current_node.key);
						all_objects->object_array[no_nodes].data = current_node.data;
						all_objects->object_array[no_nodes].key = current_node.key;
						no_nodes++;
		        }
		        mutex_unlock(&hashtable_lock);
		        all_objects->no_nodes = no_nodes;
		        if (copy_to_user((struct dump_all*)ioctl_param, all_objects, sizeof(struct dump_all))) {
		            kfree(all_objects);
			    return -EACCES;
			}
		        break;
		default:
			return -EINVAL;
	}
	kfree(object);
	kfree(all_objects);
	return sizeof(ioctl_param);

}

static struct file_operations fop = {
	.read = read_hash_table,
	.open = device_open,
	.write = insert_value,
	.release = release,
	.unlocked_ioctl = ioctl_handle
};

void init_hashtable(struct hlist_head* table){
	int i;
	for(i=0; i<7; i++) {
		INIT_HLIST_HEAD(&table[i]);
	}
}
int __init hashtable_driver_init(void) {

	int rt;

	if(alloc_chrdev_region(&device_0_number, 0, 1, DEVICE_0_NAME) < 0){   // dynamically assigning the Major device number to ht530_tbl_0 device
	   printk(KERN_DEBUG "Can't Register Device %s. Error while allocating region\n",DEVICE_0_NAME);
	   return -1;
	}
	printk(KERN_INFO "Device %s is registered successfully.\n",DEVICE_0_NAME);

	if(alloc_chrdev_region(&device_1_number, 0, 1, DEVICE_1_NAME) < 0){     // dynamically assigning the Major device number to ht530_tbl_1 device
	   printk(KERN_INFO "Can't Register Device %s. Error while allocating region\n",DEVICE_1_NAME);
	   return -1;
	}
	printk(KERN_INFO "Device %s is registered successfully.\n",DEVICE_1_NAME);

	hashtable_class = class_create(THIS_MODULE, CLASS_NAME);

	/**
        allocate dynamic memory to the device structure
	*/
	device_0_struct = kmalloc(sizeof(struct hashtable_dev),GFP_KERNEL);
	device_1_struct = kmalloc(sizeof(struct hashtable_dev),GFP_KERNEL);

	if(!device_0_struct || !device_1_struct) {
	   printk(KERN_INFO "Unable to allocate memory\n"); return -ENOMEM;
	}

    /**
        initialisation of the hashtable in structure (sets .first = NULL for all the buckets)
	*/
	hash_init(device_0_struct->hash);
	hash_init(device_1_struct->hash);

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

	rt = cdev_add(&device_1_struct->cdev, device_1_number, 1);
	if(rt < 0){
	   printk(KERN_INFO "Error adding device %s", DEVICE_1_NAME);
	   return rt;
	}

	/**
        creating device with required permissions and map to the filesystem
	*/

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

	printk(KERN_INFO "Removing device");

}

module_init(hashtable_driver_init);
module_exit(exit_device);
MODULE_LICENSE("GPL v2");


