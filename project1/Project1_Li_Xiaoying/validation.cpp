/*****************************************************************************
** Program name: Project1 Langton's Ant
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The source file for validateInt() function, which takes in a 
                 string and pass it by reference. The function makes sure the 
		 user's input is an integer. Afterwards, it returns the 
		 integer the user inputted.
*****************************************************************************/


#include "validation.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


int validateInt(std::string &inputString)
{
    //Loop until the user input an integer.
    bool flag=false;
    while (!flag){
        cin >> inputString;

	//Detect whether an extraction has failed and fix it.
	//Adapted from https://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
        if (cin.fail()){
            cin.clear();
	    cin.ignore(32767, '\n');
            cout << "Your enter is invalid. Please enter again." << endl;
        }

	//Extraction succeeds and make sure no extraneous input.
	//Adapted from https://www.learncpp.com/cpp-tutorial/5-10-stdcin-extraction-and-dealing-with-invalid-text-input/
	else{
	    cin.ignore(32767, '\n');
	    //Detect if every charactor of the string is digit.
	    //Adapted from http://www.cplusplus.com/reference/locale/isdigit/
	    int count=0;
            for (int i=0; i<inputString.length(); i++){
	        if (isdigit(inputString[i])==false){
		    count++;
		}
	    }
	    if(count==0){
		flag=true;
	    }
	    else{
	        cout << "Your enter is invalid. Please enter again." << endl;
            }
	}
    }

    //If all requirements above met, transfer the string to an integer.
    //Adapted from http://www.cplusplus.com/forum/general/13135/
    int input=atoi(inputString.c_str());
    return input;
}
