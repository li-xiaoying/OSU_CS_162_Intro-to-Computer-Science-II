/******************************************************************************
** Program name: Lab7 Stack and Queue STL Containers
** Author:       Xiaoying Li
** Date:         8/9/2019
** Description:  The bufferSimulation() function simulates a buffer, which 
		 starts with no value in the buffer. It takes in three integer 
		 parameters, and returns nothing.
******************************************************************************/



#include "bufferSimulation.hpp"
#include <iostream>
#include <queue>
#include <cstdlib>

using std::cout;
using std::endl;



void bufferSimulation(int round, int addPercentage, int removePercentage)
{
    //Adapted from https://www.geeksforgeeks.org/queue-cpp-stl/
    //Creat an empty queue.
    std::queue<int> buffer;
    //Creat an empty temporary queue.
    std::queue<int> temporary;
    int number;
    int percentage1;
    int percentage2;
    double averageLength=0.0;


    //Loop for the user inputted round number of simulations.
    for (int i=0; i<round; i++){
	number=rand()%1000+1;
	percentage1=rand()%100+1;
	percentage2=rand()%100+1;
	cout << "Round " << i+1 << ":" << endl;
	cout  << "        ** percentage1: " << percentage1 
	     << "; percentage2: " << percentage2 << endl;
	cout << "    values in the buffer: " ;

	//If the random number generated from 1-100 is less than or 
	//equal to the user specified percentage for adding value, 
	//then append the number N into the queue.
	if (percentage1<=addPercentage){
	    //Adapted from https://www.geeksforgeeks.org/queue-cpp-stl/
	    buffer.push(number);
	}


	//If another random number generated from 1-100 is less than or 
	//equal to the user specified percentage for removing value, 
	//then remove a number from the front of queue.
	if (percentage2<=removePercentage){

	    //Adapted from https://www.geeksforgeeks.org/queue-cpp-stl/
	    //Check whether the buffer is empty.
	    if (!buffer.empty()){
		buffer.pop();
	    }
	}


	//Output the values in the buffer.
	while (!buffer.empty()){
	    cout << buffer.front() << " ";
	    //Adapted from https://www.geeksforgeeks.org/queue-cpp-stl/
	    //Remove the first number of the buffer 
	    //to the end of the temporary buffer.
	    temporary.push(buffer.front());
	    buffer.pop();
	}
	cout << endl;


	//Remove all the numbers in the temporary buffer back to the buffer.
	while (!temporary.empty()){
	    buffer.push(temporary.front());
	    temporary.pop();
	}

	//Adapted from https://www.geeksforgeeks.org/queue-cpp-stl/
	//Calculate and output the length of the buffer 
	//and the average length of buffer.
	averageLength=(double)((averageLength*i+buffer.size()))/(i+1);
	cout << "    length of the buffer: " << buffer.size() << endl;
	cout << "    average length of buffer: " << averageLength <<endl;
    }
}
