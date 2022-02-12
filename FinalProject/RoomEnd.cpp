/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  The RoomEnd class inherits from Space class, and contains all
		 information of the end room, which refer to ouside. 
******************************************************************************/



#include "RoomEnd.hpp"
#include "Space.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a RoomEnd object is 
** created.
******************************************************************************/
RoomEnd::RoomEnd()
{
    top=NULL;
    bottom=NULL;
    left=NULL;
    right=NULL;
    roomNumber=6;
    roomOption=2;
    roomVisited=false;
}



/******************************************************************************
** Override action() function that takes in a vector of string as container 
** for the player to carry items and returns nothing. It implements the 
** special action for the player to interact with in the end room (outside).
******************************************************************************/
void RoomEnd::action(std::vector<std::string> &container)
{
    cout << "    Bravo! You moved little ant's items out. Let's check if you "
	 << "successfully moved everything." << endl;
    cout << "        ";

    for (int i=0; i<container.size(); i++){
	cout << container.at(i) << " ";
    }

    cout << endl;


    //If the player collected all 4 items, implement the special action
    //for the player to interact with in the end room (outside).
    if (container.size()==4){
	cout << "    Yes! You got it! Now you need to return the items back " 
	     << "to the little ant. Enter 1 to return." << endl;
	std::string unloadString;
	int unload;
	unload=validateInt(unloadString);

	while (unload!=1){
	    cout << "    Your enter is invalid. You should enter 1. Are you "
		 << "trying to steal little ant's stuff? Please enter again." 
		 << endl;
	    unload=validateInt(unloadString);
	}

	container.clear();
	cout << "    Thank you so much! "
	     << "You saved the little ant and all his items!"
	     << endl;
    }

    
    //If the player didn't collect all 4 items, tell the player game over.
    else{
	cout << "    Uh-oh! It seems you missed something inside. Game Over!" 
	     << endl;
    }

    cout << endl;
}



/******************************************************************************
** Destructor.
******************************************************************************/
RoomEnd::~RoomEnd()
{
}
