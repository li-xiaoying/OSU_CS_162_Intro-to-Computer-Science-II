/********************************************************************
** Program name: Lab3 War Game with Dice Design
** Author:       Xiaoying Li
** Date:         7/14/2019
** Description:  Game class implements the dice-rolling war game. 
                 First create a menu asks if the user wants to play 
                 the game. Then if the user wants to play the game, 
                 promote the user for information needed to start  
                 the game. Then play the game. Otherwise, exit the 
                 game.
********************************************************************/


#ifndef GAME_HPP
#define GAME_HPP


class Game
{
private:
    int dieType1;
    int dieType2;
    int sideNumber1;
    int sideNumber2;
    int round;

public:
    bool startMenu();
    bool endMenu();
    void gameMenu();
    void play();
};

#endif
