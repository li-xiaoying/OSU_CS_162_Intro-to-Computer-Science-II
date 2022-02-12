/*****************************************************************************
** Program name: Lab2 File I/O
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The source file for output_letters() function, which has two
                 parameters:an output file stream variable, and a pointer to 
		 an array of integers that contains frequencies of letters. 
		 The function first asks user for the filename the user would 
		 like to output to, then outputs the frequencies of letters 
		 to the output file in the format specified above.
		 The function returns nothing.
*****************************************************************************/


#ifndef OUTPUT_LETTERS_HPP
#define OUTPUT_LETTERS_HPP
#include <fstream>

void output_letters(std::ofstream &, int*);

#endif
