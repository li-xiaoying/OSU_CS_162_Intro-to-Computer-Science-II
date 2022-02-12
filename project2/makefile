## Program name: Project2 Zoo Tycoon
## Author:              Xiaoying Li
## Date:                  7/20/2019
## Description:       Makefile of Project2 Zoo Tycoon, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


project2: main.o Animal.o Penguin.o Tiger.o Turtle.o Zoo.o menu.o validation.o
	g++ main.o Animal.o Penguin.o Tiger.o Turtle.o Zoo.o menu.o validation.o -o project2

main.o: main.cpp Animal.hpp Penguin.hpp Tiger.hpp Turtle.hpp Zoo.hpp menu.hpp validation.hpp
	g++ -c main.cpp

Animal.o: Animal.cpp Animal.hpp
	g++ -c Animal.cpp

Penguin.o: Penguin.cpp Penguin.hpp Animal.hpp
	g++ -c Penguin.cpp

Tiger.o: Tiger.cpp Tiger.hpp Animal.hpp
	g++ -c Tiger.cpp

Turtle.o: Turtle.cpp Turtle.hpp Animal.hpp
	g++ -c Turtle.cpp

Zoo.o: Zoo.cpp Zoo.hpp Animal.hpp Penguin.hpp Tiger.hpp Turtle.hpp validation.hpp
	g++ -c Zoo.cpp

menu.o: menu.cpp menu.hpp validation.hpp
	g++ -c menu.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o project2