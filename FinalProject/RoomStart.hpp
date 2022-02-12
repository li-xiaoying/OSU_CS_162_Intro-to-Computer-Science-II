/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  The RoomStart class inherits from Space class, and contains 
		 all information of the start room.  
******************************************************************************/



#ifndef ROOMSTART_HPP
#define ROOMSTART_HPP

#include "Space.hpp"
#include <vector>
#include <string>



class RoomStart: public Space
{
public:
    RoomStart();
    void action(std::vector<std::string> &);
    ~RoomStart();
};


#endif
