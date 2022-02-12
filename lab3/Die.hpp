/******************************************************************
** Program name: Lab3 War Game with Dice Design
** Author:       Xiaoying Li
** Date:         7/14/2019
** Description:  Definition of a normal Die object, which includes 
                 number of sides on the die and the result of 
                 rolling the die once.
******************************************************************/


#ifndef DIE_HPP
#define DIE_HPP

class Die
{
protected:
    int sideNumber; //The number of sides on the die.

public:
    Die(int);
    //Function that returns the result of rolling the die once.
    int dieRolling(); 
};

#endif
