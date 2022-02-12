## Program name: Lab3 War Game with Dice Design
## Author:              Xiaoying Li
## Date:                  7/14/2019
## Description:       Makefile of Lab3 War Game with Dice Design, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


lab3: main.o Die.o LoadedDie.o Game.o validation.o
	g++ main.o Die.o LoadedDie.o Game.o validation.o -o lab3

main.o: main.cpp Die.hpp LoadedDie.hpp Game.hpp validation.hpp
	g++ -c main.cpp

Die.o: Die.cpp Die.hpp
	g++ -c Die.cpp

LoadedDie.o: LoadedDie.cpp LoadedDie.hpp Die.hpp
	g++ -c LoadedDie.cpp

Game.o: Game.cpp Game.hpp Die.hpp LoadedDie.hpp validation.hpp
	g++ -c Game.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o lab3