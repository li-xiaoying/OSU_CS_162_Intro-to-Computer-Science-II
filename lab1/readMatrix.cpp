/**********************************************************************************************
** Program name: Lab1 Matrix Calculator
** Author:       Xiaoying Li
** Date:         6/29/2019
** Description:  The source file of readMatrix() function, which has two parameters: a pointer 
                 to a 2D array and an integer as the size of the matrix. It prompts the user 
                 for all the numbers within the matrix, which means for 2x2 matrix, it asks 
                 the user for 4 numbers, and 9 numbers for a 3x3 matrix. And because the 
                 function takes a pointer to the 2D array, it doesn't return anything.
**********************************************************************************************/


#include "readMatrix.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void readMatrix(int** matrix, int size)
{
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            cout << "Please enter the integer for row " << i+1 << " column " << j+1 << endl;
            cin >> matrix[i][j];
        }
    }
}
