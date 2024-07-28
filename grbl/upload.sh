#!/bin/bash

DEVICE_NAME=$1
PROGRAMMER=$2
PROGRAM_NAME=$3

avrdude -c $PROGRAMMER -p $DEVICE_NAME -U flash:w:$PROGRAM_NAME
