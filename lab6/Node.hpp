/******************************************************************************
** Program name: Lab6 Doubly-linked List
** Author:       Xiaoying Li
** Date:         8/4/2019
** Description:  The Node class represents Node object in the linked list.
******************************************************************************/



#ifndef NODE_HPP
#define NODE_HPP



class Node
{
private:
    Node* next;
    Node* prev;
    int val;

public:
    Node(int);
    void setNext(Node*);
    void setPrev(Node*);
    Node* getNext();
    Node* getPrev();
    int getVal();
};


#endif
