/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  Abstract base class Space, which represents the space the 
		 player can be in, will be inherited by all the rooms' own 
		 subclass.
******************************************************************************/



#include "Space.hpp"



void Space::setTop(Space* t)
{
    top=t;
}



void Space::setBottom(Space* b)
{
    bottom=b;
}



void Space::setLeft(Space* l)
{
    left=l;
}



void Space::setRight(Space* r)
{
    right=r;
}



Space* Space::getLeft()
{
    return left;
}



Space* Space::getRight()
{
    return right;
}



int Space::getRoomNumber()
{
    return roomNumber;
}



int Space::getRoomOption()
{
    return roomOption;
}



Space::~Space()
{
}
