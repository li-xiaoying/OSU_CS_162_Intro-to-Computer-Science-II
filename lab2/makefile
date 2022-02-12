## Program name: Lab2 File I/O
## Author:              Xiaoying Li
## Date:                  7/7/2019
## Description:       Makefile of Lab2 File I/O, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


lab2: main.o count_letters.o output_letters.o
	g++ main.o count_letters.o output_letters.o -o lab2

main.o: main.cpp count_letters.hpp output_letters.hpp
	g++ -c main.cpp

count_letters.o: count_letters.cpp count_letters.hpp
	g++ -c count_letters.cpp

output_letters.o: output_letters.cpp output_letters.hpp
	g++ -c output_letters.cpp

clean:
	rm *.o lab2