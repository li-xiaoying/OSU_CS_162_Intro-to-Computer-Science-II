/******************************************************************************
** Program name: Lab7 Stack and Queue STL Containers
** Author:       Xiaoying Li
** Date:         8/9/2019
** Description:  The main() function controls the program flow. 
******************************************************************************/



#include "bufferSimulation.hpp"
#include "palindrome.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;



int menu();
void call(int);


int main()
{
    srand (time(NULL));
    int choice=menu();

    while(choice!=3){
	call(choice);
	choice=menu();
    }

    return 0;
}



/******************************************************************************
** The menu function prints a menu to demonstrate two functions and a option 
** to quit the program. It takes in no parameter, and returns an integer 
** representing user's choice.
******************************************************************************/
int menu()
{
    std::string optionString;
    int option;
    cout << "Choose from following options:" << endl;
    cout << "    1. Test the buffer;" << endl;
    cout << "    2. Create a palindrome;" << endl;
    cout << "    3. Quit the program." << endl;
    option=validateInt(optionString);

    while (option!=1 && option!=2 && option!=3){
	cout << "Your enter is invalid. You should enter 1, 2 or 3. "
	     << "Please enter again." << endl;
	option=validateInt(optionString);
    }

    return option;
}



/******************************************************************************
** The call function has one parameter that takes in an integer representing 
** user's choice. Then according to user's choice, it calls the corresponding 
** function.
******************************************************************************/
void call(int choice)
{
    //If user chooses to test the buffer, prompt the user to enter 
    //the two percentages, and the total number of rounds. 
    //Then display the results to the console in each round.	
    if (choice==1){
	std::string roundsString;
	int rounds;
	cout << "How many rounds would you like the buffer to be simulated? "
	     << "Please enter a positive integer." << endl;
	rounds=validateInt(roundsString);

	while (rounds<=0){
	    cout << "Your enter is invalid. The integer you entered should be "
		 << "a positive integer. Please enter again." << endl;
	    rounds=validateInt(roundsString);
	}
	
	std::string addChanceString;
	int addChance;
	cout << "Please enter the percentage chance to put a randomly "
	     << "generated number at the end of buffer. "
	     << "Please enter a nonnegative integer no more than 100." << endl;
	addChance=validateInt(addChanceString);

	while (addChance<0 || addChance>100){
	    cout << "Your enter is invalid. The integer you entered should be "
		 << "a nonnegative integer no more than 100. "
		 << "Please enter again." << endl;
	    addChance=validateInt(addChanceString);
	}

	std::string removeChanceString;
	int removeChance;
	cout << "Please enter the percentage chance to take out a randomly "
	     << "generated number at the front of buffer. "
	     << "Please enter a nonnegative integer no more than 100." << endl;
	removeChance=validateInt(removeChanceString);

	while (removeChance<0 || removeChance>100){
	    cout << "Your enter is invalid. The integer you entered should be "
		 << "a nonnegative integer no more than 100. "
		 << "Please enter again." << endl;
	    removeChance=validateInt(removeChanceString);
	}

	bufferSimulation(rounds, addChance, removeChance);
    }


    //If user chooses to create a palindrome, prompt the user to 
    //enter a string. Create the palindrome and then display it.
    else if (choice==2){
	std::string inputString;
	cout << "Please enter a string, this function will creat a palindrome."
	     << endl;
	std::getline(cin, inputString);
	cout << palindrome(inputString) << endl;
    }


    //The option to quit the program.
    else{
    }
}
