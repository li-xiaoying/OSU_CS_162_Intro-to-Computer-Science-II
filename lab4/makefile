## Program name: Lab4 OSU Information System
## Author:              Xiaoying Li
## Date:                  7/21/2019
## Description:       Makefile of Lab4 OSU Information System, which has following two target (functionalities):
##                           1. Compiling, by typing "make" in the command line, the makefile compiles the 
##                               program using g++.
##                           2. Removing executables, by typing "make clean" in the command line, the makefile 
##                               removes all the files created during compiling.


lab4: main.o University.o Building.o Person.o Instructor.o Student.o menu.o validation.o
	g++ main.o University.o Building.o Person.o Instructor.o Student.o menu.o validation.o -o lab4

main.o: main.cpp University.hpp Building.hpp Person.hpp Instructor.hpp Student.hpp menu.hpp validation.hpp
	g++ -c main.cpp

University.o: University.cpp University.hpp Building.hpp Person.hpp validation.hpp
	g++ -c University.cpp

Building.o: Building.cpp Building.hpp
	g++ -c Building.cpp

Person.o: Person.cpp Person.hpp
	g++ -c Person.cpp

Instructor.o: Instructor.cpp Instructor.hpp Person.hpp
	g++ -c Instructor.cpp

Student.o: Student.cpp Student.hpp Person.hpp
	g++ -c Student.cpp

menu.o: menu.cpp menu.hpp validation.hpp
	g++ -c menu.cpp

validation.o: validation.cpp validation.hpp
	g++ -c validation.cpp

clean:
	rm *.o lab4