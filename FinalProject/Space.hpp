/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  Abstract base class Space, which represents the space the 
		 player can be in, will be inherited by all the rooms' own 
		 subclass.
******************************************************************************/



#ifndef SPACE_HPP
#define SPACE_HPP

#include <string>
#include <vector>



class Space
{
protected:
    Space* top;
    Space* bottom;
    Space* left;
    Space* right;
    int roomNumber;
    int roomOption;  //Player's choice to go to the next room or the last room.
    bool roomVisited;

public:
    virtual void setTop(Space*);
    virtual void setBottom(Space*);
    virtual void setLeft(Space*);
    virtual void setRight(Space*);
    virtual Space* getLeft();
    virtual Space* getRight();
    virtual int getRoomNumber();
    virtual int getRoomOption();
    virtual void action(std::vector<std::string> &)=0;
    virtual ~Space();
};


#endif
