/******************************************************************************
** Program name: Lab6 Doubly-linked List
** Author:       Xiaoying Li
** Date:         8/4/2019
** Description:  The Node class represents Node object in the linked list.
******************************************************************************/



#include "Node.hpp"
#include <iostream>



Node::Node(int v)
{
    next=NULL;
    prev=NULL;
    val=v;
}



void Node::setNext(Node* n)
{
    next=n;
}



void Node::setPrev(Node* p)
{
    prev=p;
}



Node* Node::getNext()
{
    return next;
}



Node* Node::getPrev()
{
    return prev;
}



int Node::getVal()
{
    return val;
}
