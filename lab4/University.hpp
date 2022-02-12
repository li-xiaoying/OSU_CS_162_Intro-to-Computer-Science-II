/******************************************************************************
** Program name: Lab4 OSU Information System
** Author:       Xiaoying Li
** Date:         7/21/2019
** Description:  The University class contains all people and buildings in the 
		 university.  
******************************************************************************/


#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include "Building.hpp"
#include "Person.hpp"
#include <string>
#include <vector>

class University
{
private:
    //University's name
    std::string name;
    //Apapted from textbook P564.
    std::vector<Building> buildings;
    std::vector<Person*> people;

public:
    University(std::string);
    void printName();
    void addBuilding(Building);
    void addPerson(Person*);
    void printBuilding();
    void printPeople();
    void menu();
    ~University();
};

#endif
