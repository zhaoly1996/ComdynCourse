
SHELL = /bin/sh

# -------------------------------------------------------------
# complier/linker settings
# specify flags and libraries needed for your compiler

CC = g++
CCFLAGS = -g -O3

LINK = g++
LINKFLAGS = -g -o

SRC = ../src/

TARGET = COMDYN

TARGET : main.o
	$(LINK) $(LINKFLAGS) $(TARGET) main.o

main.o :
	$(CC) $(CCFLAGS) -c $(SRC)main.cpp

clean :
	rm -rf *.o
