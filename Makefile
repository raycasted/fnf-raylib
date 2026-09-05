TARGET = main.elf
OBJS = main.o

KOS_CFLAGS += -I${KOS_PORTS}/include/raylib -Iinclude/. -O2

all: rm-elf $(TARGET) iso

include $(KOS_BASE)/Makefile.rules

clean: rm-elf
	-rm -f $(OBJS)
	rm -rf build/disc/*
	rm -rf build/fnf.cdi

rm-elf:
	-rm -f $(TARGET) romdisk.*

$(TARGET): $(OBJS)
	kos-cc -o $(TARGET) $(OBJS) -lpthread -lraylib -lGL -lstdc++ -lkosutils -lwav -O2
	$(KOS_STRIP) $(TARGET)

run: $(TARGET)
	$(KOS_LOADER) $(TARGET)

dist: $(TARGET)
	-rm -f $(OBJS) romdisk.img
	$(KOS_STRIP) $(TARGET)

iso:
	mkdir -p build/disc
	cp -r resources/* build/disc/
	sh-elf-objcopy -O binary main.elf build/disc/1ST_READ.BIN
	mkdcdisc \
  		-e main.elf \
  		-r 20260524 \
  		-a hdfsyu \
  		-n "Friday Night Funkin'" \
  		-c cdda-tracks/t1-stressfull.wav \
  		-c cdda-tracks/t2-titletrack.wav \
  		-c cdda-tracks/t3-blammedfull.wav \
  		-c cdda-tracks/t4-gameover.wav \
  		-N \
  		-D build/disc \
  		-o build/fnf.cdi
	@echo CDI is in build/fnf.cdi