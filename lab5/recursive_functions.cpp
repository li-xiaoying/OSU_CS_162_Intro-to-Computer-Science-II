/******************************************************************************
** Program name: Lab5 Recursive Functions
** Author:       Xiaoying Li
** Date:         7/26/2019
** Description:  The implementation for three recursive functions.
******************************************************************************/



#include "recursive_functions.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;



/******************************************************************************
** This function recursively prints a string in reverse. It has one parameter
** of type string. It prints the reversed character to the screen followed by
** a newline character.
******************************************************************************/
void reverseString(std::string inputString)
{
    int length=inputString.length();
    if (length==0){
	cout << '\n';
    }

    else{
	//Adapted from textbook P841.
	cout << inputString.at(length-1);
	//Adapted from textbook P842.
	//Erase the last character from the inputString.
	reverseString(inputString.erase(length-1,1));
    }
}



/******************************************************************************
** This function recursively calculates the sum of an array of integers. It 
** has two parameters: a pointer to the integer array and an integer for the 
** number of elements in the array. It returns the sum of all the integers.
******************************************************************************/
int arraySum(int* array, int size)
{
    if (size==0){
	return 0;
    }

    else{
	return array[size-1]+arraySum(array, size-1);
    }
}



/******************************************************************************
** This function recursively calculates the triangular number of an integer n.  
** It has one parameter that take in an integer n. It returns the triangular
** number of n.
******************************************************************************/
int triangularNumber(int n)
{
    if (n==0){
	return 0;
    }

    else{
	return n+triangularNumber(n-1);
    }
}
