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


#include "LoadedDie.hpp"
#include "Die.hpp"


/********************************************************************
** Function inherited from Die class, which takes an integer 
** parameter n and uses it to initialize the number of sides on the 
** LoadedDie.
********************************************************************/
//Adapted from https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-derived-classes/
LoadedDie::LoadedDie(int n): Die(n)
{
}


/********************************************************************
** Function that takes no parameter and returns a biased random 
** integer between 1 and n as the result of rolling the LoadedDie 
** once.
********************************************************************/
int LoadedDie::dieRolling()
{
    //Plus 1 to the random integer the Die::dieRolling() returned to 
    //make sure the average output of rolling a LoadedDie object for 
    //several times is higher than that of a Die object with the 
    //same number of sides.
    //Adapted from https://www.learncpp.com/cpp-tutorial/11-6a-calling-inherited-functions-and-overriding-behavior/
    int numberLoadedDieRolled=Die::dieRolling()+1;

    //If the random number plus 1 is bigger than the number of sides 
    //on the LoadedDie, then return the number of sides, which is 
    //the max number the die can roll.
    if (numberLoadedDieRolled>sideNumber){
        numberLoadedDieRolled=sideNumber;
    }
    return numberLoadedDieRolled;
}
