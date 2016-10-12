TARGET=test
OBJS=linklist.o
CURRENT=`uname -r`
KDIR=/lib/modules/$(CURRENT)/build/
PWD=$(shell pwd)
obj-m	:=$(TARGET).o
$(TARGET)-objs	:=$(OBJS)

default:
	make -C $(KDIR) SUBDIRS=$(PWD) modules

$(TARGET).o: $(OBJS)
	$(LD) $(LD_RFLAGS) -r -o $@ $(OBJS)

clean:
	make -C $(KDIR) SUBDIRS=$(PWD) clean	
