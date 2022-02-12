/******************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  The Tiger class inherits from Animal class, and specifies the
		 information of a tiger. 
******************************************************************************/


#include "Animal.hpp"
#include "Tiger.hpp"


Tiger::Tiger()
{
    age=1;
    cost=10000;
    babyNumber=1;
    baseFoodCost=5*baseFoodCost;
    payoff=2000;
}


Tiger::Tiger(int animalAge)
{
    age=animalAge;
    cost=10000;
    babyNumber=1;
    baseFoodCost=5*baseFoodCost;
    payoff=2000;
}
