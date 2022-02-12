/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  The RoomBetween class inherits from Space class, and contains 
		 all information of rooms between the start room and end room. 
******************************************************************************/



#include "RoomBetween.hpp"
#include "Space.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a RoomBetween object is 
** created.
******************************************************************************/
RoomBetween::RoomBetween(int n)
{
    top=NULL;
    bottom=NULL;
    left=NULL;
    right=NULL;
    roomNumber=n;
    roomOption=1;
    roomVisited=false;
    allItems[0]="cup";
    allItems[1]="bowl";
    allItems[2]="pillow";
    allItems[3]="mirror";
    allItems[4]="clock";
}



/******************************************************************************
** Override action() function that takes in a vector of string as container 
** for the player to carry items and returns nothing. It implements the 
** special action for the player to interact with in the rooms between the 
** start room and end room.
******************************************************************************/
void RoomBetween::action(std::vector<std::string> &container)
{
    //If it's the first time the player enter this room or the player already 
    //come to this room before but didn't pick the item in this room, ask the 
    //player whether to pick the item or not.
    if (roomVisited==false){
	//Keep track of which room the player is in.
	cout << "    Now you are in the little ant's No." << roomNumber 
	     << " room, there is a " << allItems[roomNumber-2] 
	     << " in this room, do you want to pick it up?" 
	     << endl;
	cout << "        Enter 1 if you want to pick the " 
	     << allItems[roomNumber-2] << endl;
	cout << "        Enter 2 if you don't want to pick the " 
	     << allItems[roomNumber-2] << endl;
	std::string pickOptionString;
	int pickOption;
	pickOption=validateInt(pickOptionString);

	while (pickOption!=1 && pickOption!=2){
	    cout << "        Your enter is invalid. You should enter 1 or 2. "
		 << "Please enter again." << endl;
	    pickOption=validateInt(pickOptionString);
	}
	
	//If the player choose to pick the item, 
	//put the item into the cantainer vector.
	if (pickOption==1){

	    //The container's capacity limit is 4. 
	    if (container.size()<=4){
		container.push_back(allItems[roomNumber-2]);
		cout << "    You saved the little ant's " 
		     << allItems[roomNumber-2] << endl;
		//When the player pick the item in this room, 
		//set roomVisited to true.
		roomVisited=true;
	    }

	    else{
		cout << "    It seems you pick too many items. You may have "
		     << "to let it go." << endl;
	    }
	}

	//If the player choose not to pick the item, print a warning message.
	if (pickOption==2){
	    cout << "    Maybe you want to pick it up later. But do remember "
		 << "to pick it up later, or you will lose the game." << endl;
	}
    }


    //If it's not the first time the player enter this room and the item in
    //this room has already been picked, let the player go to the next room.
    else{
	cout << "    You have already come to room " << roomNumber 
	     << " and pick the item in this room before. "
	     << "No need to come again! Go to the next room!" << endl;
    }


    //Implement the special action for the player to interact 
    //with in the rooms between the start room and end room.
    cout << "    Do you want to open the door and go to the next room?" << endl;
    cout << "        Enter 1 if you want to go to the next room." << endl;
    cout << "        Enter 2 if you want to go back to the last room." << endl;
    std::string roomOptionString;
    roomOption=validateInt(roomOptionString);

    while (roomOption!=1 && roomOption!=2){
	cout << "        Your enter is invalid. You should enter 1 or 2. "
	     << "Please enter again." << endl;
	roomOption=validateInt(roomOptionString);
    }

    cout << endl;
}



/******************************************************************************
** Destructor.
******************************************************************************/
RoomBetween::~RoomBetween()
{
}
