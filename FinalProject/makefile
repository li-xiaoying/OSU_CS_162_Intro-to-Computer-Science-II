## Program name: Fianl Project A Text-based Game
## Author:              Xiaoying Li
## Date:                  8/16/2019
## Description:       Makefile of Fianl Project A Text-based Game, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


final_project: main.o Space.o RoomStart.o RoomBetween.o RoomEnd.o menu.o validation.o
	g++ main.o Space.o RoomStart.o RoomBetween.o RoomEnd.o menu.o validation.o -o final_project

main.o: main.cpp Space.hpp RoomStart.hpp RoomBetween.hpp RoomEnd.hpp menu.hpp validation.hpp
	g++ -c main.cpp

Space.o: Space.cpp Space.hpp
	g++ -c Space.cpp

RoomStart.o: RoomStart.cpp RoomStart.hpp Space.hpp validation.hpp
	g++ -c RoomStart.cpp

RoomBetween.o: RoomBetween.cpp RoomBetween.hpp Space.hpp validation.hpp
	g++ -c RoomBetween.cpp

RoomEnd.o: RoomEnd.cpp RoomEnd.hpp Space.hpp validation.hpp
	g++ -c RoomEnd.cpp

menu.o: menu.cpp menu.hpp validation.hpp
	g++ -c menu.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o final_project