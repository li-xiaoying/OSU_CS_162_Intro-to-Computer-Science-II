/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  The RoomStart class inherits from Space class, and contains 
		 all information of the start room. 
******************************************************************************/



#include "RoomStart.hpp"
#include "Space.hpp"
#include "validation.hpp"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a RoomStart object is 
** created.
******************************************************************************/
RoomStart::RoomStart()
{
    top=NULL;
    bottom=NULL;
    left=NULL;
    right=NULL;
    roomNumber=1;
    roomOption=1;
    roomVisited=false;
}



/******************************************************************************
** Override action() function that takes in a vector of string as container 
** for the player to carry items and returns nothing. It implements the 
** special action for the player to interact with in the start room.
******************************************************************************/
void RoomStart::action(std::vector<std::string> &container)
{
    //If it's the first time the player enter the start room, 
    //declare the goal of the game to the player.
    if (roomVisited==false){
	cout << "Welcome to Ant Moving Game!" << endl;
	cout << endl;
	cout << "    A little ant's home was flooded! You need to help him "
	     << "save the items in his home!" << endl;
	//Implement the special action for the player
	//to interact with in the start room.
	cout << "    First of all, the light bulb in his home was burnt out, "
	     << "he can't see anything in the darkness. "
	     << "Would you like to help him fix it?" << endl;
	cout << "        Enter 1 to fix the light bulb." << endl;
	std::string fixLightString;
	int fixLight;
	fixLight=validateInt(fixLightString);

	while (fixLight!=1){
	    cout << "        Don't you want to help the poor little ant? You "
		 << "should enter 1. Please enter again." << endl;
	    fixLight=validateInt(fixLightString);
	}

	cout << "    The light bulb has been fixed! Now let's start saving "
	     << "his stuff!" << endl;
	cout << endl;
	cout << "    The little ant has five rooms which are in a straight "
	     << "line, and now you are in his first room. From room 2 to room "
	     << "5, he has an item in each room, and you need to collect all "
	     << "4 items and move them outside. You must collect all 4 items "
	     << "to successfully complete this task. There is a door between "
	     << "each room, and the last room has a door to outside. The "
	     << "little ant is injuered, so you must hurry up: you only have "
	     << "10 chances to open a door, so don't waste your chance." 
	     << endl;
	//Set roomVisted to true.
	roomVisited=true;
    }


    //If it's not the first time the player enter the start room,
    //let the player go to the next room. 
    else{
	cout << "    You have already come to the start room before. "
	     << "No need to come again! Go to the next room!" << endl;
    }

    cout << endl;
}



/******************************************************************************
** Destructor.
******************************************************************************/
RoomStart::~RoomStart()
{
}
