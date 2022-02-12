## Program name: Project1 Langton's Ant
## Author:              Xiaoying Li
## Date:                  7/7/2019
## Description:       Makefile of Project1 Langton's Ant, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


project1: main.o Ant.o menu.o validation.o
	g++ main.o Ant.o menu.o validation.o -o project1

main.o: main.cpp Ant.hpp menu.hpp validation.hpp
	g++ -c main.cpp

Ant.o: Ant.cpp Ant.hpp
	g++ -c Ant.cpp

menu.o: menu.cpp menu.hpp validation.hpp
	g++ -c menu.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o project1