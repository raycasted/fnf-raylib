#!/bin/bash

set -e

PROJECT=fnf
BUILD_DIR=build
ISO_DIR=$BUILD_DIR/disc
OUTPUT=$BUILD_DIR/$PROJECT.cdi

echo "== Cleaning =="
make clean

echo "== Building ELF =="
make -j

echo "== Preparing disc layout =="
rm -rf $ISO_DIR
mkdir -p $ISO_DIR

# Copy ELF as Dreamcast boot binary
sh-elf-objcopy -O binary main.elf $ISO_DIR/1ST_READ.BIN

# Optional but recommended: scramble step is handled by mkdcdisc automatically
# (so you do NOT need scramble manually)

# Copy your assets (THIS is your /cd/ root)
cp -r resources/* $ISO_DIR/

echo "== Building CDI =="
# TODO set release date using -r and name using -n
mkdcdisc \
  -e main.elf \
  -r 20260524 \
  -a hdfsyu \
  -n "Friday Night Funkin'" \
  -N \
  -D $ISO_DIR \
  -o $OUTPUT
echo "== DONE =="
echo "Output: $OUTPUT"
echo "== RUNNING FLYCAST == "
/Applications/Flycast.app/Contents/MacOS/Flycast build/$PROJECT.cdi
