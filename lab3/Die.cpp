/*******************************************************************
** Program name: Lab3 War Game with Dice Design
** Author:       Xiaoying Li
** Date:         7/14/2019
** Description:  Definition of a normal Die object, which includes 
                 number of sides on the die and the result of 
                 rolling the die once.
*******************************************************************/


#include "Die.hpp"
#include <cstdlib>


/*******************************************************************
** Function that takes an integer parameter n and uses it to  
** initialize the number of sides on the die.
*******************************************************************/
Die::Die(int n)
{
    sideNumber=n;
}


/*******************************************************************
** Function that takes no parameter and returns a random integer 
** between 1 and n as the result of rolling the die once.
*******************************************************************/
int Die::dieRolling()
{
    //Adapted from http://www.cplusplus.com/reference/cstdlib/rand/
    int numberRolled=rand()%sideNumber+1;
    return numberRolled;
}
