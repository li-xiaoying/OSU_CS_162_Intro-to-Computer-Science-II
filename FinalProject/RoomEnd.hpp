/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  The RoomEnd class inherits from Space class, and contains all
		 information of the end room, which refer to ouside. 
******************************************************************************/



#ifndef ROOMEnd_HPP
#define ROOMEnd_HPP

#include "Space.hpp"
#include <string>
#include <vector>



class RoomEnd: public Space
{
public:
    RoomEnd();
    void action(std::vector<std::string> &);
    ~RoomEnd();
};


#endif
