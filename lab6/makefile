## Program name: Lab6 Doubly-linked List
## Author:              Xiaoying Li
## Date:                  8/4/2019
## Description:       Makefile of Lab6 Doubly-linked List, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


lab6: main.o DoublyLinkedList.o Node.o validation.o
	g++ main.o DoublyLinkedList.o Node.o validation.o -o lab6

main.o: main.cpp DoublyLinkedList.hpp Node.hpp validation.hpp
	g++ -c main.cpp

DoublyLinkedList.o: DoublyLinkedList.cpp DoublyLinkedList.hpp Node.hpp
	g++ -c DoublyLinkedList.cpp

Node.o: Node.cpp Node.hpp
	g++ -c Node.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o lab6