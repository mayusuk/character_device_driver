
APP = hashtable
Current = $(PWD)
obj-m:= assignment_1.o

all:
	make -C /lib/modules/4.15.0-34-generic/build M=/home/mayur/Desktop/EOSI/Assignment-1/character_device_driver modules


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
