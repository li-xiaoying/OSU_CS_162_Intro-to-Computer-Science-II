/******************************************************************************
** Program name: Lab6 Doubly-linked List
** Author:       Xiaoying Li
** Date:         8/4/2019
** Description:  The DoublyLinkedList class has a head pointer that points to 
		 the first Node in the linked list, and a tail pointer that 
		 points to the last Node in the linked list.  
******************************************************************************/



#ifndef DOUBLYLINKEDLIST_HPP
#define DOUBLYLINKEDLIST_HPP

#include "Node.hpp"



class DoublyLinkedList
{
private:
    Node* head;
    Node* tail;
    void traverse();

public:
    DoublyLinkedList();
    void addHead(int);
    void addTail(int);
    void deleteFirst();
    void deleteLast();
    void traverseReversely();
    ~DoublyLinkedList();
};


#endif
