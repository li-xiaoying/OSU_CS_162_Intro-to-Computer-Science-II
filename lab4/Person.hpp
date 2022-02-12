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


#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>


class Person
{
protected:
    std::string name;
    int age;
    std::string type;

public:
    Person(std::string, int, std::string);
    std::string getName();
    //int getAge();
    virtual void do_work();
    virtual void print();
};

#endif
