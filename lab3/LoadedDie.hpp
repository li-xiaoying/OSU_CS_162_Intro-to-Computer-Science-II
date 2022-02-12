/********************************************************************
** Program name: Lab3 War Game with Dice Design
** Author:       Xiaoying Li
** Date:         7/14/2019
** Description:  Definition of a LoadedDie object, which inherits 
                 the behavior and elements of Die class, includes 
                 number of sides on the die and the result of 
                 rolling the die once. However, for the dieRolling 
                 function, the number it returns is biased such that 
                 the average output of rolling it for several times 
                 is higher than that of a Die object with the same 
                 number of sides.
********************************************************************/


#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP
#include "Die.hpp"


//Adapted from https://www.learncpp.com/cpp-tutorial/115-inheritance-and-access-specifiers/
class LoadedDie: public Die
{
public:
    LoadedDie(int);
    int dieRolling();
};

#endif
