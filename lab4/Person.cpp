/******************************************************************************
** Program name: Lab4 OSU Information System
** Author:       Xiaoying Li
** Date:         7/21/2019
** Description:  The Person class is polymorphic. It contains 3 data members: 
		 name, age and type. It has a constructor that takes 3 values 
		 and uses them to initialize the data members, and getters for 
		 name and age. The two virtual functions will be redefined in 
		 the derived class.
******************************************************************************/


#include "Person.hpp"
#include <string>


Person::Person(std::string n, int a, std::string t)
{
    name=n;
    age=a;
    type=t;
}


std::string Person::getName()
{
    return name;
}

/*
int Person::getAge()
{
    return age;
}*/


void Person::do_work()
{
}


void Person::print()
{
}
