/******************************************************************************
** Program name: Final Project A Text-based Game
** Author:       Xiaoying Li
** Date:         8/16/2019
** Description:  The source file for startMenu() and endMenu() functions,
                 which print menu options to the screen for the user, and 
		 after the user makes a choice, verify the user's input, and
		 return the value back to the program.
******************************************************************************/



#include "menu.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;



//When the program starts, 
//use this function to ask the user whether start the game or not.
bool startMenu()
{
    std::string startOptionString;
    int startOption;
    cout << "Do you want to satrt Ant Moving Game?" << endl;
    cout << "Enter 1 if you want to start;" << endl;
    cout << "enter 0 if you want to quit." << endl;
    startOption=validateInt(startOptionString);

    while (startOption!=1 && startOption!=0){
	cout << "Your enter is invalid. You should enter 1 or 0. Please " 
	     << "enter again." << endl;
	startOption=validateInt(startOptionString);
    }

    if (startOption==1){
	return true;
    }
    if (startOption==0){
	return false;
    }
}



//After the game ended, 
//use this function to ask the user whether play again or not.
bool endMenu()
{
    std::string endOptionString;
    int endOption;
    cout << "Do you want to play Ant Moving Game again?" << endl;
    cout << "Enter 1 if you want to play again;" << endl;
    cout << "enter 0 if you want to quit." << endl;
    endOption=validateInt(endOptionString);
    
    while (endOption!=1 && endOption!=0){
	cout << "Your enter is invalid. You should enter 1 or 0. Please "
	     << "enter again." << endl;
	endOption=validateInt(endOptionString);
    }

    if (endOption==1){
	return true;
    }
    if (endOption==0){
	return false;
    }
}
