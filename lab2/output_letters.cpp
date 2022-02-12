/*****************************************************************************
** Program name: Lab2 File I/O
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The source file for output_letters() function, which has two 
                 parameters: an output file stream variable, and a pointer to 
		 an array of integers that contains frequencies of letters. 
		 The function first asks user for the filename the user would 
		 like to output to, then outputs the frequencies of letters 
		 to the output file in the format specified above. 
		 The function returns nothing.
*****************************************************************************/


#include "output_letters.hpp"
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


void output_letters(std::ofstream &outputFile, int* array)
{
    std::string fileName;
    cout << "Please enter the filename you would like to output to." << endl;
    cin >> fileName;
    //Adapted from Textbook P.869
    outputFile.open(fileName.c_str(), std::ios::out);

    for(int i=0; i<26; i++){
        outputFile << (char)('a'+i)<< ": " << array[i] << "\n";
    }

    outputFile.close();

    //Reset the count after reading each paragraph.
    for(int i=0; i<26; i++){
	array[i]=0;
    }
}
