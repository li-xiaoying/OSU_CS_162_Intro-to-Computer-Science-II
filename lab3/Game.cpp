/******************************************************************************
** Program name: Lab3 War Game with Dice Design
** Author:       Xiaoying Li
** Date:         7/14/2019
** Description:  Game class implements the dice-rolling war game. First create 
                 a menu asks if the user wants to play the game. Then if the 
                 user wants to play the game, promote the user for information 
                 needed to start the game. Then play the game. Otherwise, exit 
                 the game.
******************************************************************************/


#include "Die.hpp"
#include "LoadedDie.hpp"
#include "Game.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


/******************************************************************************
** When the program starts, use this function to ask the user whether start 
** the game or not. 
** Return true if the user wants to play the game.
** Return false if the user wants to exit the game. 
******************************************************************************/
bool Game::startMenu()
{
    std::string startOptionString;
    int startOption;
    cout << "Do you want to satrt the War Game with Dice?" << endl;
    cout << "Enter 1 if you want to play the game;" << endl;
    cout << "enter 0 if you want to exit the game." << endl;
    startOption=validateInt(startOptionString);

    //Input validation.
    while (startOption!=1 && startOption!=0){
        cout << "Your enter is invalid. Please enter again." << endl;
        startOption=validateInt(startOptionString);
    }

    if (startOption==1){
        return true;
    }
    if (startOption==0){
        return false;
    }
}


/******************************************************************************
** After the game ended, use this function to ask the user whether play again 
** or not.
** Return true if the user wants to play the game again.
** Return false if the user wants to exit the game. 
******************************************************************************/
bool Game::endMenu()
{
    std::string endOptionString;
    int endOption;
    cout << "Do you want to play the War Game with Dice again?" << endl;
    cout << "Enter 1 if you want to play the game again;" << endl;
    cout << "enter 0 if you want to exit the game." << endl;
    endOption=validateInt(endOptionString);

    //Input validation.
    while (endOption!=1 && endOption!=0){
        cout << "Your enter is invalid. Please enter again." << endl;
        endOption=validateInt(endOptionString);
    }

    if (endOption==1){
        return true;
    }
    if (endOption==0){
        return false;
    }
}


/******************************************************************************
** Function that promotes the user for information needed to start the game:
** 1. How many rounds will be played;
** 2. The type of die for each player;
** 3. The number of sides for dice of both players.
** This function takes no parameter and returns nothing.
******************************************************************************/
void Game::gameMenu()
{
    //String variables used to accept user's input.
    std::string dieType1String;
    std::string dieType2String;
    std::string sideNumber1String;
    std::string sideNumber2String;
    std::string roundString;
    
    //Prompt user for all the information needed to play the game.
    //And validate every input from the user, request for input repeatedly 
    //until the correct data is inputted.
    cout << "Please enter the type of die for the first player." << endl;
    cout << "Enter 1 if you want to choose the normal die;" << endl;
    cout << "enter 2 if you want to choose the loaded die." << endl;
    dieType1=validateInt(dieType1String);
    while (dieType1!=1 && dieType1!=2){
        cout << "Your enter is invalid. Please enter again." << endl;
        dieType1=validateInt(dieType1String);
    }

    cout << "Please enter the type of die for the second player." << endl;
    cout << "Enter 1 if you want to choose the normal die;" << endl;
    cout << "enter 2 if you want to choose the loaded die." << endl;
    dieType2=validateInt(dieType2String);
    while (dieType2!=1 && dieType2!=2){
        cout << "Your enter is invalid. Please enter again." << endl;
        dieType2=validateInt(dieType2String);
    }

    cout << "Please enter the number of sides for dice of the first player." 
         << endl;
    sideNumber1=validateInt(sideNumber1String);
    while (sideNumber1<1){
        cout << "Your enter is invalid. Please enter again." << endl;
        sideNumber1=validateInt(sideNumber1String);
    }

    cout << "Please enter the number of sides for dice of the second player." 
         << endl;
    sideNumber2=validateInt(sideNumber2String);
    while (sideNumber2<1){
        cout << "Your enter is invalid. Please enter again." << endl;
        sideNumber2=validateInt(sideNumber2String);
    }

    cout << "Please enter the number of rounds you would like to play." 
         << endl;
    round=validateInt(roundString);
}



/******************************************************************************
** Function that runs the game after all the information inputted by the user.
** This function takes no parameter and returns nothing.
******************************************************************************/
void Game::play()
{
    int player1Score=0;
    int player2Score=0;


    //If both players choose the normal die,
    if (dieType1==1 && dieType2==1){
        //create two Die objects.
        Die* player1 = new Die(sideNumber1);
        Die* player2 = new Die(sideNumber2);
        //Adapted from http://www.cplusplus.com/reference/cstdlib/rand/
        srand (time(NULL));

        //Loop the number of rounds players entered and output the detailed 
        //result of each round.
        for (int i=1; i<=round; i++){
            int player1Number=player1->dieRolling();
            int player2Number=player2->dieRolling();
            cout << "Round " << i << ": " << endl;
            cout << "Player1 uses normal dice with " << sideNumber1 
                 << " sides." << endl;
            cout << "Player2 uses normal dice with " << sideNumber2 
                 << " sides." << endl;
            cout << "Number player1 rolled: " << player1Number << endl;
            cout << "Number player2 rolled: " << player2Number << endl;

            if (player1Number>player2Number){
                cout << "Player1 rolled higher number gets 1 point." << endl;
                player1Score=player1Score+1;
            }
            else if (player2Number>player1Number){
                cout << "Player2 rolled higher number gets 1 point." << endl;
                player2Score=player2Score+1;
            }
            else{
                cout << "Both players roll the same number, it's a draw and "
                     << "no one gets a point." << endl;
            }
            cout << "Player1's score: " << player1Score << endl;
            cout << "Player2's score: " << player2Score << endl;
        }

        delete player1;
        delete player2;
    }


    //If player1 choose the normal die, and player2 choose the loaded die,
    else if (dieType1==1 && dieType2==2){
        //create one Die object and one LoadedDie object.
        Die* player1 = new Die(sideNumber1);
        LoadedDie* player2 = new LoadedDie(sideNumber2);
        //Adapted from http://www.cplusplus.com/reference/cstdlib/rand/
        srand (time(NULL));

        //Loop the number of rounds players entered and output the detailed 
        //result of each round.
        for (int i=1; i<=round; i++){
            int player1Number=player1->dieRolling();
            int player2Number=player2->dieRolling();
            cout << "Round " << i << ": " << endl;
            cout << "Player1 uses normal dice with " << sideNumber1 
                 << " sides." << endl;
            cout << "Player2 uses loaded dice with " << sideNumber2 
                 << " sides." << endl;
            cout << "Number player1 rolled: " << player1Number << endl;
            cout << "Number player2 rolled: " << player2Number << endl;

            if (player1Number>player2Number){
                cout << "Player1 rolled higher number gets 1 point." << endl;
                player1Score=player1Score+1;
            }
            else if (player2Number>player1Number){
                cout << "Player2 rolled higher number gets 1 point." << endl;
                player2Score=player2Score+1;
            }
            else{
                cout << "Both players roll the same number, it's a draw and "
                     << "no one gets a point." << endl;
            }
            cout << "Player1's score: " << player1Score << endl;
            cout << "Player2's score: " << player2Score << endl;
        }

        delete player1;
        delete player2;
    }


    //If player1 choose the loaded die, and player2 choose the normal die,
    else if (dieType1==2 && dieType2==1){
        //create one LoadedDie object and one Die object.
        LoadedDie* player1 = new LoadedDie(sideNumber1);
        Die* player2 = new Die(sideNumber2);
        //Adapted from http://www.cplusplus.com/reference/cstdlib/rand/
        srand (time(NULL));

        //Loop the number of rounds players entered and output the detailed 
        //result of each round.
        for (int i=1; i<=round; i++){
            int player1Number=player1->dieRolling();
            int player2Number=player2->dieRolling();
            cout << "Round " << i << ": " << endl;
            cout << "Player1 uses loaded dice with " << sideNumber1 
                 << " sides." << endl;
            cout << "Player2 uses normal dice with " << sideNumber2 
                 << " sides." << endl;
            cout << "Number player1 rolled: " << player1Number << endl;
            cout << "Number player2 rolled: " << player2Number << endl;

            if (player1Number>player2Number){
                cout << "Player1 rolled higher number gets 1 point." << endl;
                player1Score=player1Score+1;
            }
            else if (player2Number>player1Number){
                cout << "Player2 rolled higher number gets 1 point." << endl;
                player2Score=player2Score+1;
            }
            else{
                cout << "Both players roll the same number, it's a draw and "
                     << "no one gets a point." << endl;
            }
            cout << "Player1's score: " << player1Score << endl;
            cout << "Player2's score: " << player2Score << endl;
        }

        delete player1;
        delete player2;
    }


    //If both players choose the loaded die,
    else if (dieType1==2 && dieType2==2){
        //create two LoadedDie objects.
        LoadedDie* player1 = new LoadedDie(sideNumber1);
        LoadedDie* player2 = new LoadedDie(sideNumber2);
        //Adapted from http://www.cplusplus.com/reference/cstdlib/rand/
        srand (time(NULL));

        //Loop the number of rounds players entered and output the detailed 
        //result of each round.
        for (int i=1; i<=round; i++){
            int player1Number=player1->dieRolling();
            int player2Number=player2->dieRolling();
            cout << "Round " << i << ": " << endl;
            cout << "Player1 uses loaded dice with " << sideNumber1 
                 << " sides." << endl;
            cout << "Player2 uses loaded dice with " << sideNumber2 
                 << " sides." << endl;
            cout << "Number player1 rolled: " << player1Number << endl;
            cout << "Number player2 rolled: " << player2Number << endl;

            if (player1Number>player2Number){
                cout << "Player1 rolled higher number gets 1 point." << endl;
                player1Score=player1Score+1;
            }
            else if (player2Number>player1Number){
                cout << "Player2 rolled higher number gets 1 point." << endl;
                player2Score=player2Score+1;
            }
            else{
                cout << "Both players roll the same number, it's a draw and "
                     << "no one gets a point." << endl;
            }
            cout << "Player1's score: " << player1Score << endl;
            cout << "Player2's score: " << player2Score << endl;
        }

        delete player1;
        delete player2;
    }
    

    //Afterwards, display the final score and the final winner of the game.
    cout << "Final score: player1-" << player1Score << ", player2-" 
         << player2Score << endl;
    if (player1Score>player2Score){
        cout << "Final winner: Player1." << endl;
    }
    else if (player2Score>player1Score){
        cout << "Final winner: Player2." << endl;
    }
    else{
        cout << "It's a draw." << endl;
    }
}
