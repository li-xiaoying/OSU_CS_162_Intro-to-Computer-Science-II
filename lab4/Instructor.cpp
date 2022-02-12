/******************************************************************************
** Program name: Lab4 OSU Information System
** Author:       Xiaoying Li
** Date:         7/21/2019
** Description:  The Instructor class inherits from Person class, and contains 
		 all information of instructors. It has a constructor that 
		 takes 4 values and uses them to initialize the data members, 
		 and getters for rating. The two virtual functions of Person 
		 class are redefined in Inctructor class.
******************************************************************************/


#include "Instructor.hpp"
#include "Person.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::endl;


//Adapted from https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-derived-classes/
Instructor::Instructor(std::string n, int a, double r, std::string t): 
	    Person(n, a, t)
{
    rating=r;
}

/*
double Instructor::getRating()
{
    return rating;
}*/


void Instructor::do_work()
{
    int x=rand()%8+1;
    cout << name << " graded papers for " << x << " hours." << endl;
}


void Instructor::print()
{
    cout << type << ":  " << name << "  " << age << "  " << rating << endl;
}
