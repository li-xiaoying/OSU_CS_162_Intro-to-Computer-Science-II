/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The BlueMen class inherits from Character class, and contains
		 all information of Blue Men. 
******************************************************************************/


#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Character.hpp"


class BlueMen: public Character
{
public:
    BlueMen();
    int attack();
    void defense(int);
    bool die();
};


#endif
