#include "hashtable_object.h"

#define MAX_RING_BUFFER_SIZE 40
static DEFINE_MUTEX(ring_buffer_lock);

struct ring_buffer_data {

	int pid;
        unsigned long long timestamp;
        unsigned long kprobe_addr;
        struct dump_arg trace;
	
};

int head = -1, tail= -1;
int total_size=-1;

struct dump_arg copy_data(struct dump_arg *trace){
	int i;
	struct dump_arg copy;
	for(i=0;i<trace->no_nodes;i++){
	    copy.object_array[i] = trace->object_array[i];	
	}
	copy.no_nodes = trace->no_nodes;
	printk(KERN_INFO "No Of nodes in trace %d\n", copy.no_nodes);
	return copy;
}

int write_to_buffer(struct ring_buffer_data *buffer, int pid, unsigned long long timestamp, unsigned long kprobe_addr, struct dump_arg *trace) {

	printk(KERN_INFO "Adding Trace to the ring buffer\n");
	mutex_lock(&ring_buffer_lock);
	total_size++;
	if(total_size > MAX_RING_BUFFER_SIZE){
	        printk(KERN_INFO "MAX buffer size exceeded. Overwitting the trace from head\n");
		tail = 0;
		total_size = 0;
	}

	if(tail == -1){
		tail = 0;
		head = 0;		
	}
	buffer[tail].pid = pid;
	buffer[tail].timestamp = timestamp;
	buffer[tail].kprobe_addr = kprobe_addr;
	buffer[tail].trace =  copy_data(trace);
	tail++;
	printk(KERN_INFO "Trace Added to the ring buffer\n");
	mutex_unlock(&ring_buffer_lock);
	
	return 1;
}

int read_from_ring_buffer(void){
	
	printk(KERN_INFO "Reading Trace from the ring buffer\n");
	
	if(head == -1) {
		return -1;
	}
	head++;
	if(head == MAX_RING_BUFFER_SIZE){
		head = 0;	
	}
	return head;
}

/*
int destroy_ring_buffer(void){

	while(head != tail){
		struct ring_buffer *temp_head = head;
		head= head->next;
		kfree(temp_head);	
	}	
	
	return 0;
}
*/
