

#define DEVICE_0_NAME "ht530_tbl_0"
#define DEVICE_1_NAME "ht530_tbl_1"
#define CLASS_NAME    "ht530_drv"

#define find_node(hash, node, hashtable_pt, key) 					   \
	hash_for_each_possible(hash, node, hashtable_pt, key)

#define iterate_bucket(hash, hashtable_node_obj, bucket_no, member)    \
	hlist_for_each_entry(hashtable_node_obj, &hash[bucket_no], member)

#define traverse(name,bkt, tmp, obj, member) \
    hash_for_each_safe(name, bkt, tmp, obj, member)

#define IOCTL_APP_TYPE 78
#define IOCTL_DUMP _IOWR(IOCTL_APP_TYPE, 1, struct dump_arg)
#define IOCTL_GET_SIZE _IOWR(IOCTL_APP_TYPE, 2, int)
#define IOCTL_DUMP_ALL _IOWR(IOCTL_APP_TYPE, 3, struct dump_all)
