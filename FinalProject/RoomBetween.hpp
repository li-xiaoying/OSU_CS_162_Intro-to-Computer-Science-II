/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  The RoomBetween class inherits from Space class, and contains 
		 all information of rooms between the start room and end room. 
******************************************************************************/



#ifndef ROOMBETWEEN_HPP
#define ROOMBETWEEN_HPP

#include "Space.hpp"
#include <string>
#include <vector>



class RoomBetween: public Space
{
private:
    std::string allItems[5];  //Array of string contains all items to collect

public:
    RoomBetween(int);
    void action(std::vector<std::string> &);
    ~RoomBetween();
};


#endif
