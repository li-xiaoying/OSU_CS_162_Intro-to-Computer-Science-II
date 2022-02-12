/******************************************************************************
** Program name: Lab4 OSU Information System
** Author:       Xiaoying Li
** Date:         7/21/2019
** Description:  The Student class inherits from Person class, and contains 
		 all information of students. It has a constructor that 
		 takes 4 values and uses them to initialize the data members, 
		 and a getter for GPA. The two virtual functions of Person
		 class are redefined in Student class. 
******************************************************************************/


#include "Student.hpp"
#include "Person.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::endl;


//Adapted from https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-derived-classes/
Student::Student(std::string n, int a, double g, std::string t): 
	 Person(n, a, t)
{
    GPA=g;
}

/*
double Student::getGPA()
{
    return GPA;
}*/


void Student::do_work()
{
    int x=rand()%8+1;
    cout << name << " did " << x << " hours of homework." << endl;
}


void Student::print()
{
    cout << type << ":  " << name << "  " << age << "  " << GPA << endl;
}
