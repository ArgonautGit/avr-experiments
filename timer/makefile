DEVICE=attiny24
PROGRAMMER=avrispmkII

PROGRAM_NAME=myTimer

default: compile upload

compile: 
	./compile.sh ${DEVICE} ${PROGRAM_NAME}

upload:
	./upload.sh ${DEVICE} ${PROGRAMMER} ${PROGRAM_NAME}

hex: 
	./compile-hex.sh ${DEVICE} ${PROGRAM_NAME}
