#Makefile for compiling sourcecode of datastructure problems
#Makefile variable CC
CC = gcc
CPP = g++
#compiler falgs
#	-g	adds debugging information to the executable
#	-Wall	turns on most compiler warnings
CFLAGS = -g -Wall

SRC_PATH=./
BIN_PATH=../bin/

TARGET = balaji_problem BST_implementation BST_recursive BFTraverse hashmap heap

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(SRC_PATH)balaji_problem.c -o $(BIN_PATH)balaji_problem
	$(CC) $(CFLAGS) $(SRC_PATH)BST_implementation.c -o $(BIN_PATH)BST_implementation
	$(CC) $(CFLAGS) $(SRC_PATH)BST_recursive.c -o $(BIN_PATH)BST_recursive
	$(CPP) $(CFLAGS) $(SRC_PATH)BFTraverse.cpp -o $(BIN_PATH)BFTraverse
	$(CPP) $(CFLAGS) $(SRC_PATH)hashmap.cpp -o $(BIN_PATH)hashmap
	$(CPP) $(CFLAGS) $(SRC_PATH)heap.cpp -o $(BIN_PATH)heap

clean:
	$(RM) $(BIN_PATH)$(TARGET)
