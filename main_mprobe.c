#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*#include <sys/time.h>
#include <linux/ioctl.h>
#include <linux/rtc.h>*/
#include <time.h>
#include "data.h"

int main(int argc, char **argv)
{
	int fd, res,pointer;
	char buff[sizeof(struct object_data)];
	int i = 0;
	struct object_data *object;
	struct object_data node = {
		.data = 11,
		.key = 2	
	};
	memcpy(buff, &node, sizeof(struct object_data));

	if(argc == 1){
		return 0;
	}

	/* open devices */
	fd = open("/dev/Mprobe", O_RDWR);
	if (fd < 0 ){
		printf("Can not open device file.\n");		
		return 0;
	}else{
		printf("Device opened succesfully.\n");	
		if(strcmp("show", argv[1]) == 0){
			res = read(fd, buff, sizeof(struct object_data));
			object = (struct object_data*) buff;
			printf("Data found %d.\n", object->data);	
			sleep(1);
			// printf("'%s'\n", buff);
		}else if(strcmp("write", argv[1]) == 0){
			res = write(fd, buff, strlen(buff));
			if(res == strlen(buff)+1){
				printf("Can not write to the device file.\n");		
				return 0;
			}	
		}
		/* close devices */
		close(fd);
	}
	return 0;
}
