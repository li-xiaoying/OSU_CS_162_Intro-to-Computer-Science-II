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


#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"
#include <string>


class Student: public Person
{
private:
    double GPA;

public:
    Student(std::string, int, double, std::string);
   // double getGPA();
    void do_work();
    void print();
};

#endif
