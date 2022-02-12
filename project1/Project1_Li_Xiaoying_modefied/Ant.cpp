/**************************************************************************
** Program name: Project1 Langton's Ant
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The implementation file for class Ant, which contains the 
		 following information:
		 1. The ant's location.
		 2. The ant¡¯s direction.
		 3. The board.
		 4. The ant's move.
**************************************************************************/


#include "Ant.hpp"
#include <iostream>

using std::cout;
using std::endl;


///Constructor that initializes 6 integer data members.
Ant::Ant(int r, int c, int sR, int sC, int sD, int s)
{
    row=r+2;
    column=c+2;
    antRow=sR;
    antColumn=sC;
    antDirection=sD;
    step=s;
}


//Method that creates the board.
void Ant::createBoard()
{
    //Dynamically allocates the memory space for the board.
    board=new char*[row];
    for (int i=0; i<row; i++){
	board[i]=new char[column];
    }

    //Create the board that is filled with white space.
    for (int j=1; j<row-1; j++){
	for (int k=1; k<column-1; k++){
	    board[j][k]=' ';
	}
    }

    //Create edges around the board.
    for (int x=0; x<column; x++){
	board[0][x]='-';
	board[row-1][x]='-';
    }
    for (int y=0; y<row; y++){
	board[y][0]='|';
	board[y][column-1]='|';
    }
}


//Method that prints the board.
void Ant::printBoard()
{
    for (int i=0; i<row; i++){
	for (int j=0; j<column; j++){
	    cout << board[i][j];
	}
	cout << endl;
    } 
}


//Method that determines every step of the ant.
void Ant::move()
{
    //If the ant is on a white space, change the current space to black.
    if (board[antRow][antColumn]==' '){
	board[antRow][antColumn]='#';
	
	//When the ant's direction is up, move one step right,
	//and change the ant's direction to right.
	if (antDirection==1){	    
	    antRow=antRow;
	    antColumn=antColumn+1;
	    antDirection=2;
	    //If the ant hits the right edge, 
	    //moves to the first space of this row.
	    if(board[antRow][antColumn]=='|'){
		antColumn=1;
	    }	    
	}

	//When the ant's direction is right, move one step down,
	//and change the ant's direction to down.
	else if (antDirection==2){
	    antRow=antRow+1;
	    antColumn=antColumn;
	    antDirection=3;
	    //If the ant hits the bottom edge, 
	    //moves to the first space of this column.
	    if(board[antRow][antColumn]=='-'){
		antRow=1;
	    }
	}

	//When the ant's direction is down, move one step left,
	//and change the ant's direction to left.
	else if (antDirection==3){
	    antRow=antRow;
	    antColumn=antColumn-1;
	    antDirection=4;
	    //If the ant hits the left edge, 
	    //moves to the last space of this row.
	    if(board[antRow][antColumn]=='|'){
		antColumn=column-2;
	    }
	}

	//When the ant's direction is left, move one step up,
	//and change the ant's direction to up.
	else if (antDirection==4){
	    antRow=antRow-1;
	    antColumn=antColumn;
	    antDirection=1;
	    //If the ant hits the up edge, 
	    //moves to the last space of this column.
	    if(board[antRow][antColumn]=='-'){
		antRow=row-2;
	    }
	}

	//Using 'spaceColor' to store the color 
	//of the space that the ant moves to.
	spaceColor=board[antRow][antColumn];
	//Using '*' to fill the space that the 
	//ant moves to and print the new board. 
	board[antRow][antColumn]='*';
	printBoard();
	//Change the new space that the ant locates back to its 
	//original color for determining the next step of the ant.
	board[antRow][antColumn]=spaceColor;
    }

    //If the ant is on a black space, change the current space to white.
    else if (board[antRow][antColumn]=='#'){
	board[antRow][antColumn]=' ';

	//When the ant's direction is up, move one step left,
	//and change the ant's direction to left.
	if (antDirection==1){
	    antRow=antRow;
	    antColumn=antColumn-1;
	    antDirection=4;
	    //If the ant hits the left edge, 
	    //moves to the last space of this row.
	    if(board[antRow][antColumn]=='|'){
		antColumn=column-2;
	    }
	}

	//When the ant's direction is right, move one step up,
	//and change the ant's direction to up.
	else if (antDirection==2){
	    antRow=antRow-1;
	    antColumn=antColumn;
	    antDirection=1;
	    //If the ant hits the up edge, 
	    //moves to the last space of this column.
	    if(board[antRow][antColumn]=='-'){
		antRow=row-2;
	    }
	}

	//When the ant's direction is down, move one step right,
	//and change the ant's direction to right.
	else if (antDirection==3){
	    antRow=antRow;
	    antColumn=antColumn+1;
	    antDirection=2;
	    //If the ant hits the right edge, 
	    //moves to the first space of this row.
	    if(board[antRow][antColumn]=='|'){
		antColumn=1;
	    }
	}

	//When the ant's direction is left, move one step down,
	//and change the ant's direction to down.
	else if (antDirection==4){
	    antRow=antRow+1;
	    antColumn=antColumn;
	    antDirection=3;
	    //If the ant hits the bottom edge, 
	    //moves to the first space of this column.
	    if(board[antRow][antColumn]=='-'){
		antRow=1;
	    }
	}

	//Using 'spaceColor' to store the color 
	//of the space that the ant moves to.
	spaceColor=board[antRow][antColumn];
	//Using '*' to fill the space that the 
	//ant moves to and print the new board.
	board[antRow][antColumn]='*';
	printBoard();
	//Change the new space that the ant locates back to its 
	//original color for determining the next step of the ant.
	board[antRow][antColumn]=spaceColor;
    }
}

//Method that runs every step of the ant.
void Ant::run()
{
    //The 0th step of the simulation.
    createBoard();
    board[antRow][antColumn]='*';
    printBoard();
    board[antRow][antColumn]=' ';

    //Runs every step of the ant.
    for (int i=0; i<step; i++){
	cout << "Step: " << i+1 << endl;
	move();
    }

    //Free the dynamically allocated memory.
    for (int j=0; j<row; j++){
	delete[] board[j];
    }
    delete[] board;
}
