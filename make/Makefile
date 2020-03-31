
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

TARGET : main.o user_b.o
	$(LINK) $(LINKFLAGS) $(TARGET) main.o user_b.o

main.o :
	$(CC) $(CCFLAGS) -c $(SRC)main.cpp

user_b.o :
	$(CC) $(CCFLAGS) -c $(SRC)user_b.cpp

clean :
	rm -rf *.o
