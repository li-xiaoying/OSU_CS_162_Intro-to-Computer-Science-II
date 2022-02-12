/******************************************************************************
** Program name: Lab7 Stack and Queue STL Containers
** Author:       Xiaoying Li
** Date:         8/9/2019
** Description:  The palindrome() function use a stack to create a palindrome, 
		 which is a string that is the same forwards and backwards. It 
		 takes in a string parameter, and returns the palindrome of 
		 this stirng.
******************************************************************************/



#include "palindrome.hpp"
#include <string>
#include <stack>



std::string palindrome(std::string input)
{
    //Adapted from https://www.geeksforgeeks.org/stack-in-cpp-stl/
    //Creat an empty temporary stack.
    std::stack<char> temporary;

    //Loop to put all the characters of the string into the temporary stack.
    for (int i=0; i<input.length(); i++){
	//Adapted from https://www.geeksforgeeks.org/stack-in-cpp-stl/
	temporary.push(input.at(i));
    }

    std::string output=input;

    //Adapted from https://www.geeksforgeeks.org/stack-in-cpp-stl/
    //Loop until the temporary stack is empty.
    while (!temporary.empty()){
	//Remove all the characters in the stack to the output string.
	output+=temporary.top();
	temporary.pop();
    }

    return output;
}
