/**************************************************************
** Program name: Lab2 File I/O
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The source file for count_letters() function, 
                 which has two parameters: an input file 
                 stream variable, and a pointer to an array of 
		 integers. The function first reads the 
		 paragraph string from the input file stream, 
		 then counts the letter frequencies of that 
		 paragraph, and store the frequencies in the 
		 array. Disregards upper/lower case letters. 
		 The function returns nothing.
**************************************************************/


#include "count_letters.hpp"
#include <iostream>
#include <fstream>
#include <string>


void count_letters(std::ifstream &inputFile, int* array)
{
    //Read the paragraph string from the input file stream.
    //Adapted from Textbook P.866
    std::string paragraph;
    std::getline(inputFile, paragraph);

    char character;
    int length=paragraph.length();

    //Count the letter frequencies of that paragraph,
    //and store the frequencies in the array.
    for (int i=0; i<length; i++){
	character=paragraph.at(i);
        if (character>='a' && character<='z'){
            array[character-'a']++;
        }
	else if (character>='A' && character<='Z'){
            array[character-'A']++;
        }
    }
}
