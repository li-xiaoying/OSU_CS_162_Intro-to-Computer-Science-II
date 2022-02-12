## Program name: Project3 Fantasy Combat Game
## Author:              Xiaoying Li
## Date:                  8/3/2019
## Description:       Makefile of Project3 Fantasy Combat Game, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


project3: main.o Character.o Barbarian.o BlueMen.o HarryPotter.o Medusa.o Vampire.o menu.o validation.o
	g++ main.o Character.o Barbarian.o BlueMen.o HarryPotter.o Medusa.o Vampire.o menu.o validation.o -o project3

main.o: main.cpp Character.hpp Barbarian.hpp BlueMen.hpp HarryPotter.hpp Medusa.hpp Vampire.hpp menu.hpp validation.hpp
	g++ -c main.cpp

Character.o: Character.cpp Character.hpp
	g++ -c Character.cpp

Barbarian.o: Barbarian.cpp Barbarian.hpp Character.hpp
	g++ -c Barbarian.cpp

BlueMen.o: BlueMen.cpp BlueMen.hpp Character.hpp
	g++ -c BlueMen.cpp

HarryPotter.o: HarryPotter.cpp HarryPotter.hpp Character.hpp
	g++ -c HarryPotter.cpp

Medusa.o: Medusa.cpp Medusa.hpp Character.hpp
	g++ -c Medusa.cpp

Vampire.o: Vampire.cpp Vampire.hpp Character.hpp
	g++ -c Vampire.cpp

menu.o: menu.cpp menu.hpp validation.hpp
	g++ -c menu.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o project3