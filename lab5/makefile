## Program name: Lab5 Recursive Functions
## Author:              Xiaoying Li
## Date:                  7/26/2019
## Description:       Makefile of Lab5 Recursive Functions, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


lab5: main.o recursive_functions.o validation.o
	g++ main.o recursive_functions.o validation.o -o lab5

main.o: main.cpp recursive_functions.hpp validation.hpp
	g++ -c main.cpp

recursive_functions.o: recursive_functions.cpp recursive_functions.hpp
	g++ -c recursive_functions.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o lab5