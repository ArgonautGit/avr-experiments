DEVICE=attiny13
PROGRAMMER=avrispmkII

PROGRAM_NAME=light-switch

default: compile upload

compile: 
	./compile.sh ${DEVICE} ${PROGRAM_NAME}

upload:
	./upload.sh ${DEVICE} ${PROGRAMMER} ${PROGRAM_NAME}

