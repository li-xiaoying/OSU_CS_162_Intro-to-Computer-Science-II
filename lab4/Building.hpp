/******************************************************************************
** Program name: Lab4 OSU Information System
** Author:       Xiaoying Li
** Date:         7/21/2019
** Description:  The Building class contains information about all the 
		 buildings in the university. It has 3 private  data members: 
		 name, size, and address. It has a constructor that takes 3 
		 values and uses them to initialize the data members, and
		 getters for each data member.
******************************************************************************/


#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <string>


class Building
{
private:
    std::string name;
    int size;
    std::string address;

public:
    Building(std::string, int, std::string);
    std::string getName();
    int getSize();
    std::string getAddress();
};

#endif
