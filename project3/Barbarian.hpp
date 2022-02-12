/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The Barbarian class inherits from Character class, and 
		 contains all information of Barbarian. 
******************************************************************************/


#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Character.hpp"


class Barbarian: public Character
{
public:
    Barbarian();
    int attack();
    void defense(int);
    bool die();
};


#endif
