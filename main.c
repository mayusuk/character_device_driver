#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <linux/ioctl.h>
#include <errno.h>
#include <pthread.h>
#include "ioctl_struct.h"

int total_nodes = 0;
pthread_mutex_t lock;

struct thread_arg {
    int fd, start,end;
};

void * add_node(void *thread_arguments)
{

struct thread_arg *arg;
struct object_data node;
char buff[sizeof(struct object_data)];
int i;

arg = (struct thread_arg *) thread_arguments;

 for(i = 0;i<80;i++)
 {
    node.key = (rand() % (arg->end - arg->start + 1) + arg->start);
    node.data = node.key * rand();
    memcpy(buff, &node, sizeof(struct object_data));
    pthread_mutex_lock(&lock);
    total_nodes++;
    if(total_nodes > 200){
        pthread_exit(0);
    }

    if(write(arg->fd, buff, strlen(buff))){
        printf("Node inserted with key %d and value %d", node.key, node.data);
    }else{
        pthread_mutex_unlock(&lock);
        printf("Error! while inserting with key %d and value %d", node.key, node.data);
        pthread_exit((void*)-1);
    }
    pthread_mutex_unlock(&lock);

 }

}


int main ()
{

    pthread_t thread1,thread2,thread3,thread4,thread5;
    int fd;
    /* open devices */
	fd = open("/dev/ht530_tbl_0", O_RDWR);
    struct thread_arg one = {.fd = fd, .start=0, .end=40};
    struct thread_arg two = {.fd = fd, .start=20, .end=60};
    struct thread_arg three = {.fd = fd, .start=40, .end=100};
    struct thread_arg four = {.fd = fd, .start=80, .end=120};
    struct thread_arg five = {.fd = fd, .start=100, .end=140};

    pthread_create(&thread1,NULL, add_node, (void *) &one);
    pthread_create(&thread2,NULL, add_node, (void *) &two);
    pthread_create(&thread3,NULL, add_node, (void *) &three);
    pthread_create(&thread4,NULL, add_node, (void *) &four);
    pthread_create(&thread5,NULL, add_node, (void *) &five);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);
    pthread_join(thread4,NULL);
    pthread_join(thread5,NULL);

    close(fd);

}
