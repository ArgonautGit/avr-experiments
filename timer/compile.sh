#!/bin/bash

DEVICE_NAME=$1
PROGRAM_NAME=$2

avr-gcc -g -mmcu=$DEVICE_NAME $PROGRAM_NAME.c -o $PROGRAM_NAME.o
avr-objcopy $PROGRAM_NAME.o $PROGRAM_NAME.elf
