obj-m := malloc_mod.o
KDIR := /scratch/spring2018/group7_new/SLOBPATCH/linux-yocto-3.19/
PWD_C := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD_C) modules
clean:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD_C) clean


