/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The Vampire class inherits from Character class, and contains
		 all information of Vampire. 
******************************************************************************/


#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Character.hpp"


class Vampire: public Character
{
public:
    Vampire();
    int attack();
    void defense(int);
    bool die();
};


#endif
