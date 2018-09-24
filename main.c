#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/ioctl.h>
#include <errno.h>
#include <pthread.h>
#include <unistd.h> 

#include "ioctl_struct.h"
#include "ht530_drv.h"


#define TOTAL_NO_OF_OPERATIONS 100
int total_nodes = 0, total_operations = 0;
pthread_mutex_t lock;

struct thread_arg {
    int fd, start,end;
};

void * populate_add_search_delete_node(void *thread_arguments)
{

struct thread_arg *arg;
struct object_data node, *object;
char buff[sizeof(struct object_data)];
int i, res;

arg = (struct thread_arg *) thread_arguments;

/**
    Populating the hashtable with values
*/

 for(i = 0;i<80;i++)
 {
    /**
        randomly creating the key and data depending on the given start and end
    */

    node.key = (rand() % (arg->end - arg->start + 1) + arg->start);
    node.data = rand() % arg->end ;
    memcpy(buff, &node, sizeof(struct object_data));

    pthread_mutex_lock(&lock);
    total_nodes++;                             // Using mutex to increament the value of total_nodes as this is the critical sections
    if(total_nodes > MAX_NUMBER_OF_NODES){
        printf("Adding Nodes Done !!!!\n");
        pthread_mutex_unlock(&lock);
        break;
    }

    res = write(arg->fd, buff, strlen(buff));

    if( res >= 0 ){
        printf("Node inserted with key %d and value %d\n", node.key, node.data);
    }else if (res == EINVAL){
        printf("ERROR! %s\n", strerror(errno));
    }
    else{
        pthread_mutex_unlock(&lock);
        printf("Error! while inserting with key %d and value %d\n", node.key, node.data);
        pthread_exit((void*)-1);
    }
    pthread_mutex_unlock(&lock);

 }

/**
    Doing add, delete and search operations on hashtable
*/
for(i = 0;i<40;i++)
 {
    node.key = (rand() % (arg->end - arg->start + 1) + arg->start);
    node.data = rand() % arg->end ;
    memcpy(buff, &node, sizeof(struct object_data));

    if(total_operations > TOTAL_NO_OF_OPERATIONS){     // exiting the thread if total operations exceeds 100
        printf("%d operations are done !!!!\n", TOTAL_NO_OF_OPERATIONS);
        pthread_mutex_unlock(&lock);
        pthread_exit(0);
    }

    pthread_mutex_lock(&lock);
    total_operations++;            // Using mutex to increament the value of total_operations as this is the critical sections
    pthread_mutex_unlock(&lock);

    /**
        Searching the nodes with random key
    */
    if(read(arg->fd, buff, strlen(buff))){
        object = (struct object_data*) buff;
        printf("Node Found with key %d and value %d\n", object->key, object->data);
    }else{           // Key not found in the hashtable
         printf("ERROR! %s\n", strerror(errno));
    }

    pthread_mutex_lock(&lock);
    total_operations++;
    pthread_mutex_unlock(&lock);

    /**
        deleting the nodes with random key
    */
    node.data = 0 ;
    res = write(arg->fd, buff, strlen(buff));
    object = (struct object_data*) buff;

    if(res == 0){   // Key found and deleted as the data field was 0
        printf("Node Found and deleted with key %d and value %d\n", object->key, object->data);
    }else {         // Error thrown as the key not found in hashtable and node is also not added as data field was zero
         printf("ERROR! %s\n", strerror(errno));
    }

 }

 return 0;
}

void* add_probe(void* num){
     int fd, offset;
     char buff[sizeof(int)];
     offset = (int) num;
     fd = open("/dev/Mprobe", O_RDWR);
     memcpy(buff, &offset, sizeof(int));
     write(fd, buff, strlen(buff));
     return 0;
}

int main ()
{

    pthread_t thread1,thread2,thread3,thread4,thread5, thread6;
    int fd,i,offset;
    struct dump_all dump_hashtable;

    /* open device */
    fd = open("/dev/ht530_tbl_0", O_RDWR);
    struct thread_arg one = {.fd = fd, .start=0, .end=40};
    struct thread_arg two = {.fd = fd, .start=20, .end=60};
    struct thread_arg three = {.fd = fd, .start=40, .end=100};
    struct thread_arg four = {.fd = fd, .start=80, .end=120};
    struct thread_arg five = {.fd = fd, .start=100, .end=140};

    printf("Please enter the offset:-");
    scanf("%d", &offset);

    pthread_create(&thread6,NULL, add_probe, (void*)offset);    	
    pthread_create(&thread1,NULL, populate_add_search_delete_node, (void *) &one);
    pthread_create(&thread2,NULL, populate_add_search_delete_node, (void *) &two);
    pthread_create(&thread3,NULL, populate_add_search_delete_node, (void *) &three);
    pthread_create(&thread4,NULL, populate_add_search_delete_node, (void *) &four);
    pthread_create(&thread5,NULL, populate_add_search_delete_node, (void *) &five);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);
    pthread_join(thread6,NULL);


    /**
        Dumping all the objects from the hashtable
    */
    printf("*************** Dumping all the objects from the hashtable *****************\n");
    if(ioctl(fd, IOCTL_DUMP_ALL, &dump_hashtable)){
        for(i=0;i< dump_hashtable.no_nodes;i++){
            printf("key = %d  data = %d \n", dump_hashtable.object_array[i].key,dump_hashtable.object_array[i].data);
        }
    }
    close(fd);

    return 0;
}
