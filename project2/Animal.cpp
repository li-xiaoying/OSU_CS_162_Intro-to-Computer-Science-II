/******************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  The Animal class contains general information of all types of
		 animals in the zoo.
******************************************************************************/


#include "Animal.hpp"


Animal::Animal()
{
    baseFoodCost=10;
}


int Animal::getAge()
{
    return age;
}


int Animal::getCost()
{
    return cost;
}


int Animal::getBabyNumber()
{
    return babyNumber;
}


int Animal::getBaseFoodCost()
{
    return baseFoodCost;
}


int Animal::getPayoff()
{
    return payoff;
}


void Animal::ageIncrease()
{
    age++;
}
