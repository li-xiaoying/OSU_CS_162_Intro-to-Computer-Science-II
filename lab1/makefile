## Program name: Lab1 Matrix Calculator
## Author:              Xiaoying Li
## Date:                  6/29/2019
## Description:       Makefile of Lab1 Matrix Calculator, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


lab1: main.o readMatrix.o determinant.o
	g++ main.o readMatrix.o determinant.o -o lab1

main.o: main.cpp readMatrix.hpp determinant.hpp
	g++ -c main.cpp

readMatrix.o: readMatrix.cpp readMatrix.hpp
	g++ -c readMatrix.cpp

determinant.o: determinant.cpp determinant.hpp
	g++ -c determinant.cpp

clean:
	rm *.o lab1