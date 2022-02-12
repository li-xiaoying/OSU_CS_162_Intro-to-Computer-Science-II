/******************************************************************************
** Program name: Project3 Fantasy Combat Game
** Author:       Xiaoying Li
** Date:         8/3/2019
** Description:  Abstract base class Character, will be inherited by all the 
		 characters' own subclass.
******************************************************************************/


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>


class Character
{
protected:
    std::string type;
    int attackPoint;
    int defensePoint;
    int armor;
    int strength;

public:
    virtual void setType(std::string);
    virtual int attack()=0;
    virtual void defense(int)=0;
    virtual bool die()=0;
};


#endif
