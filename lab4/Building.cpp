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


#include "Building.hpp"
#include <string>


Building::Building(std::string n, int s, std::string a)
{
    name=n;
    size=s;
    address=a;
}


std::string Building::getName()
{
    return name;
}


int Building::getSize()
{
    return size;
}


std::string Building::getAddress()
{
    return address;
}
