CROSS_COMPILE?="aarch64-linux-gnu-"
CC=$(CROSS_COMPILE)"gcc"

FILE_TAIL?=""

slow: FILE_TAIL="-slow"
slow: m5op_arm_A64.o sth.c
	$(CC) sth.c m5op_arm_A64.o -o sth$(FILE_TAIL).out --static -DFLUSH

fast: m5op_arm_A64.o sth.c
	$(CC) sth.c m5op_arm_A64.o -o sth$(FILE_TAIL).out --static
