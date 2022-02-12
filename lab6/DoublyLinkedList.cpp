/******************************************************************************
** Program name: Lab6 Doubly-linked List
** Author:       Xiaoying Li
** Date:         8/4/2019
** Description:  The DoublyLinkedList class has a head pointer that points to 
		 the first Node in the linked list, and a tail pointer that 
		 points to the last Node in the linked list. 
******************************************************************************/



#include "DoublyLinkedList.hpp"
#include "Node.hpp"
#include <iostream>

using std::cout;
using std::endl;



/******************************************************************************
** Constructor that initializes all data members when a DoublyLinkedList 
** object is created.
******************************************************************************/
DoublyLinkedList::DoublyLinkedList()
{
    head=NULL;
    tail=NULL;
}



/******************************************************************************
** Function that adds a new node to the head.
******************************************************************************/
void DoublyLinkedList::addHead(int value)
{
    Node* temporary=new Node(value);

    //If the linked list is empty, 
    //set head and tail both point to the new Node.
    if (head==NULL){
	head=temporary;
	tail=temporary;
    }

    //If the linked list is not empty, add the new Node to the head.
    else{
	temporary->setNext(head);
	head->setPrev(temporary);
	head=temporary;
    }

    traverse();
}



/******************************************************************************
** Function that adds a new node to the tail.
******************************************************************************/
void DoublyLinkedList::addTail(int value)
{
    Node* temporary=new Node(value);

    //If the linked list is empty, 
    //set head and tail both point to the new Node.
    if (tail==NULL){
	head=temporary;
	tail=temporary;
    }

    //If the linked list is not empty, add the new Node to the tail.
    else{
	temporary->setPrev(tail);
	tail->setNext(temporary);
	tail=temporary;
    }

    traverse();
}



/******************************************************************************
** Function that deletes the first node in the list.
******************************************************************************/
void DoublyLinkedList::deleteFirst()
{
    //If the list is empty, give a warning message.
    if (head==NULL && tail==NULL){
	cout << "The list is empty! No node can be deleted!" << endl;
    }

    //If the list only has one Node, delete it.
    else if (head==tail){
	delete head;
	head=NULL;
	tail=NULL;
    }

    //Else, delete the first node in the list.
    else{
	Node* first=head;
	head=head->getNext();
	head->setPrev(NULL);
	delete first;
    }

    traverse();
}


/******************************************************************************
** Function that deletes the last node in the list.
******************************************************************************/
void DoublyLinkedList::deleteLast()
{
    //If the list is empty, give a warning message.
    if (head==NULL && tail==NULL){
	cout << "The list is empty! No node can be deleted!" << endl;
    }

    //If the list only has one Node, delete it.
    else if (head==tail){
	delete head;
	head=NULL;
	tail=NULL;
    }

    //Else, delete the last node in the list.
    else{
	Node* last=tail;
	tail=tail->getPrev();
	tail->setNext(NULL);
	delete last;
    }

    traverse();
}



/******************************************************************************
** Function that traverses the list reversely, prints the nodes from back of 
** the linked list to the front (tail to head).
******************************************************************************/
void DoublyLinkedList::traverseReversely()
{
    //If the list is empty, print a warning message.
    if (head==NULL && tail==NULL){
	cout << "The list is empty! Can not print it!" << endl;
    }


    //Else, print the value of all Nodes in the linked list from tail to head.
    else{
	cout << "Your linked list is: ";
	Node* temporary=tail;

	while (temporary!=NULL){
	    cout << temporary->getVal() << " ";
	    temporary=temporary->getPrev();
	}

	cout << endl;
    }
}



/******************************************************************************
** Function that traverses the list, prints the value of all Nodes in the 
** linked list from head to tail.
******************************************************************************/
void DoublyLinkedList::traverse()
{
    //If the list is empty, print a warning message.
    if (head==NULL && tail==NULL){
	cout << "The list is empty! Can not print it!" << endl;
    }


    //Else, print the value of all Nodes in the linked list from head to tail.
    else{
	cout << "Your linked list is: ";
	Node* temporary=head;

	while (temporary!=NULL){
	    cout << temporary->getVal() << " ";
	    temporary=temporary->getNext();
	}

	cout << endl;
    }
}



/******************************************************************************
** Destructor.
******************************************************************************/
DoublyLinkedList::~DoublyLinkedList()
{
    Node* current=head;
    Node* following;

    while (current!=NULL){
	following=current->getNext();
	delete current;
	current=following;
    }
}
