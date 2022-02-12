/******************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  The Turtle class inherits from Animal class, and specifies 
		 the information of a turtle.  
******************************************************************************/


#ifndef TURTLE_HPP
#define TURTLE_HPP
#include "Animal.hpp"


class Turtle: public Animal
{
public:
    Turtle();
    Turtle(int);
};

#endif
