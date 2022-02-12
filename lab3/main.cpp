/*********************************************************************
** Program name: Lab3 War Game with Dice Design
** Author:       Xiaoying Li
** Date:         7/14/2019
** Description:  This program is a 2-player game played through dice. 
                 There are two kinds of dice: normal die and loaded 
                 die. The player who rolls higher number gets one 
                 point. If both players roll the same number, it is 
                 considered a draw and no one gets a point. 
                 Afterwards, player who gets the higher score after 
                 all rounds wins.
                 This main file control the program flow.
*********************************************************************/


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


int main()
{
    //Create a Game object.
    Game game;

    //Start the game if the user decided to play.
    if (game.startMenu()){
        game.gameMenu();
        game.play();

        //After the game end, ask the user whether play again or not.
        //As long as the user want to play again, start the game.
        while (game.endMenu()){
            game.gameMenu();
            game.play();
        }
    }

    //Otherwise, quit.
    return 0;
}


