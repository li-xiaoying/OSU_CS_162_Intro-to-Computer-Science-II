/******************************************************************************
** Program name: Lab5 Recursive Functions
** Author:       Xiaoying Li
** Date:         7/26/2019
** Description:  The main function controls the entire program. 
******************************************************************************/



#include "recursive_functions.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;



int menu();
void call(int);


int main()
{
    int choice=menu();

    while(choice!=4){
	call(choice);
	choice=menu();
    }

    return 0;
}



/******************************************************************************
** The menu function prints a menu to demonstrate three recursive functions and ** a option to quit the program. It takes in no parameter, and returns an 
** integer representing user's choice.
******************************************************************************/
int menu()
{
    std::string optionString;
    int option;
    cout << "Select one of the three functions to call or quit the program:" 
	 << endl;
    cout << "    1. Print a string in reverse;" << endl;
    cout << "    2. Calculate the sum of an array of integers;" << endl;
    cout << "    3. Calculate the triangular number of an integer;" << endl;
    cout << "    4. Quit the program." << endl;
    option=validateInt(optionString);

    while (option!=1 && option!=2 && option!=3 && option!=4){
	cout << "Your enter is invalid. Please enter again." << endl;
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
    //If user chooses function1, prompt the user to enter 
    //a string and call the reverseString() function.
    if (choice==1){
	std::string inputString;
	cout << "Please enter a string, this function will print the string "
	     << "in reverse." << endl;
	//Adapted from http://www.cplusplus.com/reference/string/string/getline/
	std::getline(cin, inputString);
	reverseString(inputString);
    }


    //If user chooses function2,
    else if (choice==2){
	//first prompt the user an integer input for 
	//the number of integers in the array;
	std::string sizeString; 
	int size;
	cout << "Please enter the number of integers in the array." << endl;
	size=validateInt(sizeString);

	while (size<0 || size>10000){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    size=validateInt(sizeString);
	}

	//then a series of integers to fill the array.
	int array[size];
	std::string arrayString;

	for (int i=0; i<size; i++){	   
	    cout << "Please enter the integer of array[" << i << "]: " 
	         << endl;
	    array[i]=validateInt(arrayString);
	}

	//Afterwards, call the arraySum() function and print the result. 
	cout << "Sum of all integers in the array is: "
	     << arraySum(array, size) << endl;
    }


    //If user chooses function3, prompt the user an integer, 
    //then call the triangularNumber() function and print the result.
    else if (choice==3){
	std::string numberString;
	int number;
	cout << "Please enter a nonnegative integer no more than 10000." 
	     << endl;
	number=validateInt(numberString);

	while (number<0 || number>10000){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    number=validateInt(numberString);
	}

	cout << "Triangular number of the integer is: " 
	     << triangularNumber(number) << endl;
    }
    

    //The option to quit the program.
    else{
    }
}
