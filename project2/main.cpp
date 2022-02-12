/******************************************************************************
** Program name: Project2 Zoo Tycoon
** Author:       Xiaoying Li
** Date:         7/20/2019
** Description:  Zoo tycoon is a game that allows players to run a zoo 
		 business. Different types of animals cost different prices, 
		 have different maintenance costs, and return a different 
		 profit at the end of each day. For this game, the player will 
		 be the proud owner of a virtual zoo that has spaces to house 
		 tigers, penguins and turtles.
		 The main() function controls the program flow.
******************************************************************************/


#include "Animal.hpp"
#include "Penguin.hpp"
#include "Tiger.hpp"
#include "Turtle.hpp"
#include "Zoo.hpp"
#include "menu.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


int main()
{	
    srand (time(NULL));

    //Start the game if the player decided to play.
    if (startMenu()){
	//Create a Zoo object.
	Zoo zooTycoon;
	zooTycoon.menu();
	zooTycoon.dayBegin();
	zooTycoon.randomEvent();
	zooTycoon.dayEnd();

	//After the day ends, prompt the player whether 
	//to keep playing or end the game.
	//As long as the player wants to keep playing, 
	//run the game until the player has no money.
	while (zooTycoon.keepPlay()){
	    zooTycoon.dayBegin();
	    zooTycoon.randomEvent();
	    zooTycoon.dayEnd();
	}

	//After the game end, promptthe player whether to play again or not.
	//As long as the player wants to play again, start the game.
	while (endMenu()){
	    Zoo zooTycoon;
	    zooTycoon.menu();
	    zooTycoon.dayBegin();
	    zooTycoon.randomEvent();
	    zooTycoon.dayEnd();
	    while (zooTycoon.keepPlay()){
		zooTycoon.dayBegin();
		zooTycoon.randomEvent();
		zooTycoon.dayEnd();
	    }
	}
    }
    return 0;
}

