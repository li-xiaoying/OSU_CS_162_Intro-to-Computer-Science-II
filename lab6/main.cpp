/******************************************************************************
** Program name: Lab6 Doubly-linked List
** Author:       Xiaoying Li
** Date:         8/4/2019
** Description:  The main() function controls the program flow.
******************************************************************************/



#include "Node.hpp"
#include "DoublyLinkedList.hpp"
#include "validation.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;



int menu();
void call(int, DoublyLinkedList*);


int main()
{
    int choice=menu();
    DoublyLinkedList* list=new DoublyLinkedList();

    while(choice!=6){
	call(choice, list);
	choice=menu();
    }

    delete list;
    return 0;
}



/******************************************************************************
** The menu function prints a menu to demonstrate five functions for the
** linked list and an option to exit the program. It takes in no parameter, 
** and returns an integer representing user's choice.
******************************************************************************/
int menu()
{
    std::string optionString;
    int option;
    cout << "Welcome to my linked list! Choose from following options:" 
	 << endl;
    cout << "    1. Add a new node to the head;" << endl;
    cout << "    2. Add a new node to the tail;" << endl;
    cout << "    3. Delete from head;" << endl;
    cout << "    4. Delete from tail;" << endl;
    cout << "    5. Traverse the list reversely;" << endl;
    cout << "    6. Exit." << endl;
    option=validateInt(optionString);

    while (option<1 || option>6){
	cout << "Your enter is invalid. Please enter again." << endl;
	option=validateInt(optionString);
    }

    return option;
}



/******************************************************************************
** The call function has two parameters: an integer representing user's choice 
** and a DoublyLinkedList pointer. Then according to user's choice, it calls 
** the corresponding function of the DoublyLinkedList object.
******************************************************************************/
void call(int choice, DoublyLinkedList* list)
{
    //If user chooses function1, prompt the user to enter an
    //integer and validate the input, then call addHead(int) function.
    if (choice==1){
	std::string headNumberString;
	int headNumber;
	cout << "Please enter a positive integer:"<< endl;
	headNumber=validateInt(headNumberString);

	while (headNumber<=0){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    headNumber=validateInt(headNumberString);
	}

	list->addHead(headNumber);
    }


    //If user chooses function2, prompt the user to enter an
    //integer and validate the input, then call addTail(int) function.
    else if (choice==2){
	std::string tailNumberString;
	int tailNumber;
	cout << "Please enter a positive integer:"<< endl;
	tailNumber=validateInt(tailNumberString);

	while (tailNumber<=0){
	    cout << "Your enter is invalid. Please enter again." << endl;
	    tailNumber=validateInt(tailNumberString);
	}

	list->addTail(tailNumber);
    }


    else if (choice==3){
	list->deleteFirst();	
    }
    

    else if (choice==4){
	list->deleteLast();	
    }


    else if (choice==5){
	list->traverseReversely();	
    }


    //The option to quit the program.
    else{
    }
}
