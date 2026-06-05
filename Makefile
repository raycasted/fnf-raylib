TARGET = main.elf
OBJS = main.o

KOS_CFLAGS += -I${KOS_PORTS}/include/raylib -Iinclude/. -O2

all: rm-elf $(TARGET)

include $(KOS_BASE)/Makefile.rules

clean: rm-elf
	-rm -f $(OBJS)

rm-elf:
	-rm -f $(TARGET) romdisk.*

$(TARGET): $(OBJS)
	kos-cc -o $(TARGET) $(OBJS) -lpthread -lraylib -lGL -lstdc++ -lkosutils
	$(KOS_STRIP) $(TARGET)

run: $(TARGET)
	$(KOS_LOADER) $(TARGET)

dist: $(TARGET)
	-rm -f $(OBJS) romdisk.img
	$(KOS_STRIP) $(TARGET)

