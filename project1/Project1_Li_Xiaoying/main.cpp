/********************************************************************************
** Program name: Project1 Langton's Ant
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The main function contains following steps:
                 1. Use the menu function to determine whether the user want to
		    start the simulation or not.
		 2. If the user want to start the simulation, prompt user to 
		    input all the information needed.
		 3. Run the simulation until it reaches the designated step.
		 4. After the simulation ended, ask the user whether play again 
		    or not. As long as the user want to play again, start the 
		    game again. 
********************************************************************************/


#include "menu.hpp"
#include "Ant.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


void runLangtonAnt();

int main()
{
    //Start the simulation if the user decided to start. 
    if (startMenu()){
        runLangtonAnt();
	//After the simulation ended, ask the user whether play again or not.
	//As long as the user want to play again, start the simulation.
        while (endMenu()){
            runLangtonAnt();
	}
    }//Otherwise, quit.    
    return 0;
}


//Function that runs the Langton's Ant.
void runLangtonAnt()
{
    //String variables used to accept user's input.
    std::string rowString;
    std::string columnString;
    std::string startRowString;
    std::string startColumnString;
    std::string startDirectionString;
    std::string stepString;

    //Int variables used to accept valid input 
    //and initialize data members of Ant class.
    int row;
    int column;
    int startRow;
    int startColumn;
    int startDirection;
    int step;

    //Prompt user for all the information needed to start the simulation.
    //And validate every input from the user, request for input repeatedly 
    //until the correct data is inputted.
    cout << "Please enter the number of rows for the board." << endl;
    row=validateInt(rowString);
    while (row<1){
        cout << "Your enter is invalid. Please enter again." << endl;
        row=validateInt(rowString);
    }

    cout << "Please enter the number of columns for the board." << endl;
    column=validateInt(columnString);
    while (column<1){
        cout << "Your enter is invalid. Please enter again." << endl;
        column=validateInt(columnString);
    }

    cout << "Please enter the starting row of the ant." << endl;
    startRow=validateInt(startRowString);
    while (startRow<1 || startRow>row){
        cout << "Your enter is invalid. Please enter again." << endl;
        startRow=validateInt(startRowString);
    }

    cout << "Please enter the starting column of the ant." << endl;
    startColumn=validateInt(startColumnString);
    while (startColumn<1 || startColumn>column){
        cout << "Your enter is invalid. Please enter again." << endl;
        startColumn=validateInt(startColumnString);
    }

    cout << "Please enter the direction you want the ant to start in." << endl;
    cout << "Choose up: enter 1;" <<endl;
    cout << "Choose right: enter 2;" <<endl;
    cout << "Choose down: enter 3;" <<endl;
    cout << "Choose left: enter 4;" <<endl;
    startDirection=validateInt(startDirectionString);
    while (startDirection!=1 && startDirection!=2 && startDirection!=3 
	   && startDirection!=4){
        cout << "Your enter is invalid. Please enter again." << endl;
        startDirection=validateInt(startDirectionString);
    }

    cout << "Please enter the number of steps you want the ant to move during "
	 << "the simulation." << endl;
    step=validateInt(stepString);

    //After all the information inputted, start the simulation.
    cout << "The Langton's Ant Simulation begins, and the symbols' meanings "
	 << "are listed below." << endl; 
    cout << "    '*': the space is occupied by an ant." << endl;
    cout << "    '#': the space is a black space." << endl;
    cout << "    ' ': the space is a white space." << endl;
    cout << "Note: when the ant hits the side of the board, wrap the board "
	 << "around and the ant will appears on the other side." << endl;
    //Using all the information inputted above to run the simulation. 
    Ant simulationAnt(row, column, startRow, startColumn, startDirection, step); 
    simulationAnt.run();
}
