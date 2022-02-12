/******************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  The Turtle class inherits from Animal class, and specifies 
		 the information of a turtle.
******************************************************************************/


#include "Animal.hpp"
#include "Turtle.hpp"


Turtle::Turtle()
{
    age=1;
    cost=100;
    babyNumber=10;
    baseFoodCost=baseFoodCost/2;
    payoff=5;
}


Turtle::Turtle(int animalAge)
{
    age=animalAge;
    cost=100;
    babyNumber=10;
    baseFoodCost=baseFoodCost/2;
    payoff=5;
}
