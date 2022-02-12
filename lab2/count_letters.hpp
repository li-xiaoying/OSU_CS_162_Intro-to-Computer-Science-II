/**************************************************************
** Program name: Lab2 File I/O
** Author:       Xiaoying Li
** Date:         7/7/2019
** Description:  The header file for count_letters() function, 
                 which has two parameters:an input file 
                 stream variable, and a pointer to an array of 
		 integers. The function first reads the 
		 paragraph string from the input file stream, 
		 then counts the letter frequencies of that 
		 paragraph, and store the frequencies in the 
		 array. Disregards upper/lower case letters.
	         The function returns nothing.	 
**************************************************************/


#ifndef COUNT_LETTERS_HPP
#define COUNT_LETTERS_HPP
#include <fstream>

void count_letters(std::ifstream &, int*);

#endif
