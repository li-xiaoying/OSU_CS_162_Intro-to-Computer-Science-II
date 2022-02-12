/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  The HarryPotter class inherits from Character class, and 
		 contains all information of Harry Potter. 
******************************************************************************/


#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "Character.hpp"


class HarryPotter: public Character
{
private:
    int dieCount;

public:
    HarryPotter();
    int attack();
    void defense(int);
    bool die();
};


#endif
