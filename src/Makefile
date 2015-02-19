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

TARGET = balaji_problem BST_implementation BST_recursive

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(SRC_PATH)balaji_problem.c -o $(BIN_PATH)balaji_problem
	$(CC) $(CFLAGS) $(SRC_PATH)BST_implementation.c -o $(BIN_PATH)BST_implementation
	$(CC) $(CFLAGS) $(SRC_PATH)BST_recursive.c -o $(BIN_PATH)BST_recursive
	$(CPP) $(CFLAGS) $(SRC_PATH)stl.cpp -o $(BIN_PATH)stl

clean:
	$(RM) $(BIN_PATH)$(TARGET)
