/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The Medusa class inherits from Character class, and contains
		 all information of Medusa.  
******************************************************************************/


#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Character.hpp"


class Medusa: public Character
{
public:
    Medusa();
    int attack();
    void defense(int);
    bool die();
};


#endif
