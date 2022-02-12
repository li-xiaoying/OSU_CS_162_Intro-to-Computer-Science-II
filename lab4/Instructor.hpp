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


#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include "Person.hpp"
#include <string>


class Instructor: public Person
{
private:
    double rating;

public:
    Instructor(std::string, int, double, std::string);
    //double getRating();
    void do_work();
    void print();
};

#endif
