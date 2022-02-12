/******************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  The Penguin class inherits from Animal class, and specifies 
		 the information of a penguin.
******************************************************************************/


#ifndef PENGUIN_HPP
#define PENGUIN_HPP
#include "Animal.hpp"


class Penguin: public Animal
{
public:
    Penguin();
    Penguin(int);
};

#endif
