/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  Abstract base class Character, will be inherited by all the 
		 characters' own subclass.
******************************************************************************/


#include "Character.hpp"
#include <string>


void Character::setType(std::string t)
{
    type=t;
}
