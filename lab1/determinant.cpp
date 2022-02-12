/***********************************************************************
** Program name: Lab1 Matrix Calculator
** Author:       Xiaoying Li
** Date:         6/29/2019
** Description:  The source file of determinant() function, which has 
                 two parameters: a pointer to a 2D array and an integer
                 as the size of the matrix. It takes in the 2D array,
                 which contains the value inside the matrix, and 
                 calculates the determinant. Afterwards, it returns the 
                 determinant.
***********************************************************************/


#include "determinant.hpp"

int determinant(int** matrix, int size)
{
    int calculateDet;

    //If the 2D array is 2*2, calculate the determinant of the matrix.
    if (size==2){
        int a=matrix[0][0];
        int b=matrix[0][1];
        int c=matrix[1][0];
        int d=matrix[1][1];
        calculateDet=a*d-b*c;
    }
    
    //If the 2D array is 3*3, calculate the determinant of the matrix.
    if (size==3){
        int a=matrix[0][0];
        int b=matrix[0][1];
        int c=matrix[0][2];
        int d=matrix[1][0];
        int e=matrix[1][1];
        int f=matrix[1][2];
        int g=matrix[2][0];
        int h=matrix[2][1];
        int i=matrix[2][2];
        calculateDet=a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g);
    }

    return calculateDet;
}
