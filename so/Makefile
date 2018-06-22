CC      = $(CROSS_COMPILE)gcc
LD      = $(CROSS_COMPILE)ld
AR      = $(CROSS_COMPILE)ar
NM      = $(CROSS_COMPILE)nm
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump
READELF = $(CROSS_COMPILE)readelf

OBJS = so.o

CFLAGS += -fPIC -Wall -I../ta/include -I$(TEEC_EXPORT)/include -I./include
#Add/link other required libraries here
LDADD += -lteec -L$(TEEC_EXPORT)/lib

#BINARY=my_test
LIB=libso.so

.PHONY: all
all: $(LIB)

$(LIB): $(OBJS)
	$(CC) -shared -o $@ $<

.PHONY: clean
clean:
	rm -f $(OBJS) $(BINARY)
