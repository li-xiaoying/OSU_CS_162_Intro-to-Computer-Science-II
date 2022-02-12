/*****************************************************************************
** Program name: Project1 Langton's Ant
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The header file for class Ant, which has eight private data 
                 members, three private helper functions and two public 
		 functions. The information about every data member and 
		 function is listed below in in-line comment.
*****************************************************************************/


#ifndef ANT_HPP
#define ANT_HPP

class Ant
{
private:
    char** board;  //Pointer to a 2D array to hold the board
    int row;  //Number of rows of the board
    int column;  //Number of columns of the board 
    int step;   //Number of steps the ant moves during the simulation
    int antRow;  //Ant's location
    int antColumn;  //Ant's location
    int antDirection;  //Ant's direction
    char spaceColor;  //Color of the space the ant moves to
    void createBoard();  //Helper function that creates the board
    void printBoard();  //Helper function that prints the board
    void move();  //Helper function that determines the ant's every step

public:
    //Constructor that initializes 6 integer data members
    Ant(int, int, int, int, int, int);
    //Method that runs every step of the ant
    void run();
};

#endif
