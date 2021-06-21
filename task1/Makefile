# @Author: Prasad Sunil Udawant <prasad_s_udawant>
# @Date:   2021-06-21T20:21:21+05:30
# @Email:  prasad.udawant.linux@gmail.com
# @Project: my_eudyptula_solution
# @Filename: Makefile.mak
# @Last modified by:   prasad_s_udawant
# @Last modified time: 2021-06-21T21:55:21+05:30
# @License: GPLV3

# If KERNELRELEASE is defined, we've been invoked from the kernel build system
# and cam use its language
ifneq ($(KERNELRELEASE), )
obj-m := test_module.o
test_module-objs := helloworld.o

# Otherwise we will invoke currently running kernel build system
else
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean

endif
