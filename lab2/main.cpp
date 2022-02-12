/**************************************************************************************
** Program name: Lab2 File I/O
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The program reads a file filled with letters, count the letter 
                 frequencies in the file, and write the results to a new file. 
                 The main() function first asks for the file the user would like to 
		 read, then read the file chosen by the user. 
                 The program continues counting letters until the EOF character. For 
		 each paragraph in the input file, the program counts the frequency of 
		 each letters, ask user what filename to output to, then proceed to 
		 output the frequencies to the file. Each paragraph has its own output 
		 file. 
                 The letter counting disregards the upper/lower case differences.
**************************************************************************************/


#include "count_letters.hpp"
#include "output_letters.hpp"
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string fileName;
    int array[26]={0};

    //Input file open validation.
    bool flag=false;
    cout << "Please enter the name of the file you would like to read." << endl;
    while (!flag){
        cin >> fileName;
	//Adapted from Textbook P.869
        inputFile.open(fileName.c_str());
        if (inputFile.fail()){
            cout << "The file was not found. Please enter the filename again." << endl;
        }
        else{
            flag=true;
        }
    }

    //Adapted from Textbook P.870
    while (!inputFile.eof()){
        count_letters(inputFile, array);
	output_letters(outputFile, array);        	
    }

    inputFile.close();
    return 0;
}
