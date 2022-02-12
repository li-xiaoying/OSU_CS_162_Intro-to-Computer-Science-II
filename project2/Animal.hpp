/*****************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  The Animal class contains general information of all types of
		 animals in the zoo.
*****************************************************************************/


#ifndef ANIMAL_HPP
#define ANIMAL_HPP


class Animal
{
protected:
    int age;
    int cost;
    int babyNumber;
    int baseFoodCost;
    double payoff;

public:
    Animal();
    int getAge();
    int getCost();
    int getBabyNumber();
    int getBaseFoodCost();
    int getPayoff();
    void ageIncrease();
};

#endif
