CROSS_COMPILE?="aarch64-linux-gnu-"
CC=$(CROSS_COMPILE)"gcc"

FILE_TAIL?=""

all: m5op_arm_A64.o sth.c
	$(CC) sth.c m5op_arm_A64.o -o sth$(FILE_TAIL).out --static     
