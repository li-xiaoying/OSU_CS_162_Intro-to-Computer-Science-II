/******************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  The Zoo class has a dynamic array for each type of animal and
		 defines all events in the zoo.
******************************************************************************/


#ifndef ZOO_HPP
#define ZOO_HPP

#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"


class Zoo
{
private:
    int tigerNumber;
    int penguinNumber;
    int turtleNumber;
    int tigerSize;
    int penguinSize;
    int turtleSize;
    Tiger* tigerArray;
    Penguin* penguinArray;
    Turtle* turtleArray;
    int day;
    int money;
    int bonus;
    void addTiger(int);
    void addPenguin(int);
    void addTurtle(int);
    void sick();
    void boom();
    void baby();
    bool checkMoney();

public:
    Zoo();
    void menu();
    void dayBegin();
    void randomEvent();
    void dayEnd();
    bool keepPlay();
    ~Zoo();
};

#endif
