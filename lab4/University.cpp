/******************************************************************************
** Program name: Lab4 OSU Information System
** Author:       Xiaoying Li
** Date:         7/21/2019
** Description:  The University class contains all people and buildings in the 
		 university. 
******************************************************************************/


#include "University.hpp"
#include "Building.hpp"
#include "Person.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;



//Constructor that takes a string value and uses 
//it to initialize the name of university.
University::University(std::string n)
{
    name=n;
}


//Function that prints the university's name.
void University::printName()
{
    cout << name << endl;
}


//Function that adds Building objects to buildings vector.
void University::addBuilding(Building aB)
{
    //Apapted from textbook P567.
    buildings.push_back(aB);
}


//Function that adds Person objects to people vector.
void University::addPerson(Person* aP)
{
    //Apapted from textbook P567.
    people.push_back(aP);
}


//Function that prints the information on all the buildings.
void University::printBuilding()
{
    cout << "Information about all the buildings is printed below:" << endl;
    for (int i=0; i<buildings.size(); i++){
	cout << buildings[i].getName() << "  " << buildings[i].getAddress()
	     << "  " << buildings[i].getSize() << endl;
    }
    cout << endl;
}


//Function that prints the information of all the people.
void University::printPeople()
{
    cout << "Information of everybody at the university is printed below:" 
	 << endl;
    for (int i=0; i<people.size(); i++){
	//Adapted from http://www.cplusplus.com/doc/tutorial/polymorphism/
	people[i]->print();
	cout << "    ";
	people[i]->do_work();
    }
    cout << endl;
}


//Function that prints options to user when 
//the OSU Information System is accessed.
void University::menu()
{
    std::string optionString;
    int option;
    cout << "Enter 1 if you want to print information about all the buildings."
	 << endl;
    cout << "Enter 2 if you want to print information of everybody at the "
	 << "university." << endl;
    cout << "Enter 3 if you want to choose a person to do work." << endl;
    cout << "Enter 4 if you want to exit the system." << endl;
    option=validateInt(optionString);
    while (option!=1 && option!=2 && option!=3 && option!=4){
	cout << "Your enter is invalid. Please enter again." << endl;
	option=validateInt(optionString);
    }

    if (option==1){
	printBuilding();
    }

    if (option==2){
	printPeople();
    }

    if (option==3){
	std::string personOptionString;
	int personOption;

	//Print all the people's name.
	for (int i=0; i<people.size(); i++){
	    cout << "    " << i+1 << ". " << people[i]->getName() << endl;
	}

	//Let the user input the choice of the person 
	//the user would like to do work.
	cout << "Enter the number of the person you would like to do the work."
	     << endl;
	personOption=validateInt(personOptionString);
	while (personOption<1 || personOption>people.size()){
	cout << "Your enter is invalid. Please enter again." << endl;
	personOption=validateInt(personOptionString);
	}
	cout << people[personOption-1]->getName() << " will do the work." 
	     << endl;       
    }

    if (option==4){
    }
}


//Destructor.
University::~University()
{
    int buildingSize=buildings.size();
    int peopleSize=people.size();

    for (int i=0; i<buildingSize; i++){
	//Adapted from textbook P574.
	buildings.pop_back();
    }

    for (int i=0; i<peopleSize; i++){
	delete people[i];
    }
}
