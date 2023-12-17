# the compiler: gcc for C program, define as g++ for C++
CC = g++
 
# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall
 
all: mainapp

mainapp: main.o
	$(CC) $(CFLAGS) main.o
 
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
 
clean:
	$(RM) mainapp