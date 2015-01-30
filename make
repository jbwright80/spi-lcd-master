#!/bin/bash
avr-gcc -mmcu=atmega644 -O2 -o main.elf main.c && \
avr-objcopy -O ihex main.elf main.hex && \
avr-objdump -d main.elf > main.list
