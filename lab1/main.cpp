/****************************************************************************
** Program name: Lab1 Matrix Calculator
** Author:       Xiaoying Li
** Date:         6/29/2019
** Description:  The main function contains following steps:
                 1. Ask the users to choose the size of the matrix (2x2 or 
                    3x3).
                 2. Dynamically allocates the memory space for the matrix, 
                    using readMatrix() to prompt the user to enter 4 or 9 
                    integers to fill the matrix.
                 3. Calculate the determinant using determinant().
                 4. Display both the matrix and the determinant to the user.
                 5. Free the dynamically allocated memory.
****************************************************************************/


#include "readMatrix.hpp"
#include "determinant.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Ask the users to choose the size of the matrix (2x2 or 3x3).
    cout << "Please choose the size of the matrix:" << endl;
    cout << "enter 2 if you want to choose 2*2 matrix;" << endl;
    cout << "enter 3 if you want to choose 3*3 matrix." << endl;
    int size;
    cin >> size;

    //Input Validation.
    while (size !=2 && size!=3){
        cout << "Your choice is invalid. Please choose again." << endl;
        cin >> size;
    }

    //Dynamically allocates the memory space for the matrix.
    int** matrix=new int*[size];
    for (int i=0; i<size; i++){
        matrix[i]=new int[size];
    }

    //Using readMatrix() to prompt the user to enter 4 or 9 integers to 
    //fill the matrix.
    readMatrix(matrix, size);
    //Using determinant() to calculate the determinant.
    int calDeterminant=determinant(matrix, size);

    //Display the matrix and the determinant to the user.    
    cout << "The matrix is: " << endl;
    for (int j=0; j<size; j++){
        for (int k=0; k<size; k++){
            cout << matrix[j][k] << " ";
        }
        cout << endl;
    }
    cout << "The determiant of the matrix is " << calDeterminant << endl;
    
    //Free the dynamically allocated memory.
    for (int i=0; i<size; i++){
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
