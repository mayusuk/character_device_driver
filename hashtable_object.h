
#include <linux/hashtable.h>
#include "ioctl_struct.h"
/**
    hashtable_object : struct for node of hashtable bucket
*/
struct hashtable_object{
	struct object_data obj;
	struct hlist_node hashtable_pt;
};
