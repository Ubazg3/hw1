#include <iostream>
#include "Stack.h"
using std::endl;
using std::cout;
/*
	this function is adding node to the linked list
	input: the list and the value
	output: none
*/
void addToList(linkedList* l, int newValue)
{
    linkedList* newNode = new linkedList;
    newNode->num = newValue;
    newNode->next = NULL;
    linkedList* curr = l;
    while (curr->next)
    {
        curr = curr->next;
    }
    curr->next = newNode;
}
/*
	this function is removing a node from the linked list
	input: the list
	output: none
*/
void removeFromList(linkedList* l)
{
	linkedList* curr = l;
	if (curr)
	{
		while (curr->next)
		{
			curr = curr->next;
		}
		delete curr;
	}
}
