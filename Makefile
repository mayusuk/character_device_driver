KDIR:=/opt/iot-devkit/1.7.2/sysroots/i586-poky-linux/usr/src/kernel
#PWD:= $(shell pwd)

CC = i586-poky-linux-gcc
ARCH = x86
CROSS_COMPILE = i586-poky-linux-
SROOT=/opt/iot-devkit/1.7.2/sysroots/i586-poky-linux

APP_HASHTABLE = hashtable
APP_MPROBE = mprobe
obj-m += assignment_1.o kprobe.o

all:
	make ARCH=x86 CROSS_COMPILE=i586-poky-linux- -C $(KDIR) M=/home/mayur/Desktop/EOSI/Assignment-1/character_device_driver modules -lpthread
	i586-poky-linux-gcc -o $(APP_HASHTABLE) main.c --sysroot=$(SROOT) -lpthread
	i586-poky-linux-gcc -o $(APP_MPROBE) main_mprobe.c --sysroot=$(SROOT) -lpthread
clean:
	rm -f *.ko
	rm -f *.o
	rm -f Module.symvers
	rm -f modules.order
	rm -f *.mod.c
	rm -rf .tmp_versions
	rm -f *.mod.c
	rm -f *.mod.o
	rm -f \.*.cmd
	rm -f Module.markers
	rm -f $(APP) 
