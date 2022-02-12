## Program name: Lab7 Stack and Queue STL Containers
## Author:              Xiaoying Li
## Date:                  8/9/2019
## Description:       Makefile of Lab7 Stack and Queue STL Containers, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


lab7: main.o bufferSimulation.o palindrome.o validation.o
	g++ main.o bufferSimulation.o palindrome.o validation.o -o lab7

main.o: main.cpp bufferSimulation.hpp palindrome.hpp validation.hpp
	g++ -c main.cpp

bufferSimulation.o: bufferSimulation.cpp bufferSimulation.hpp
	g++ -c bufferSimulation.cpp

palindrome.o: palindrome.cpp palindrome.hpp
	g++ -c palindrome.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o lab7