/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  The main() function controls the program flow.
******************************************************************************/



#include "Space.hpp"
#include "RoomStart.hpp"
#include "RoomBetween.hpp"
#include "RoomEnd.hpp"
#include "menu.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;



void game();



int main()
{
    if (startMenu()){
	game();
	while(endMenu()){
	    game();
	}
    }
    return 0;
}



/******************************************************************************
** The game() function create 6 Space objects with the structure of linked 
** space, which is linear. It then implements the game.
******************************************************************************/
void game()
{
    Space* player=NULL;
    Space* room1;
    Space* room2;
    Space* room3;
    Space* room4;
    Space* room5;
    Space* room6;

    room1=new RoomStart();
    room2=new RoomBetween(2);
    room3=new RoomBetween(3);
    room4=new RoomBetween(4);
    room5=new RoomBetween(5);
    room6=new RoomEnd();

    room1->setTop(NULL);
    room1->setBottom(NULL);
    room1->setLeft(NULL);
    room1->setRight(room2);

    room2->setTop(NULL);
    room2->setBottom(NULL);
    room2->setLeft(room1);
    room2->setRight(room3);

    room3->setTop(NULL);
    room3->setBottom(NULL);
    room3->setLeft(room2);
    room3->setRight(room4);

    room4->setTop(NULL);
    room4->setBottom(NULL);
    room4->setLeft(room3);
    room4->setRight(room5);

    room5->setTop(NULL);
    room5->setBottom(NULL);
    room5->setLeft(room4);
    room5->setRight(room6);

    room6->setTop(NULL);
    room6->setBottom(NULL);
    room6->setLeft(room5);
    room6->setRight(NULL);

    //Set player at the start room.
    player=room1;
    int step=0;
    std::vector<std::string> container;


    //Loop until the step limit or the player is doing to the end room.
    while (step<=10 && player->getRoomNumber()>0 && player->getRoomNumber()<6){
	player->action(container);

	//If the player chose to goto the next room, 
	//set player to the next room.
	if (player->getRoomOption()==1){
	    player=player->getRight();
	}

	//If the player chose to goto the last room, 
	//set player to the last room.
	else if (player->getRoomOption()==2){
	    player=player->getLeft();
	}

	step++;
	cout << "[Step: " << step << "]" << endl;
    }


    //After the player walks through the first 5 rooms, 
    //if the number of steps is no more than 10, let user enter the end room.
    if (step<=10){
	player->action(container);
    }

    //Otherwise, game over.
    else{
	cout << "    You wasted too many steps and the little ant was dead! "
	     << "Game Over!" << endl;
    }

    cout << endl;
    
    delete room1;
    delete room2;
    delete room3;
    delete room4;
    delete room5;
    delete room6;
}
