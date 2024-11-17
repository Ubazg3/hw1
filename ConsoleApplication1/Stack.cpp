#include <iostream>
#include "Stack.h"
using std::endl;
using std::cout;
/*
	this function is adding node to the linked list
	input: the stack and the value
	output: none
*/
void push(Stack* s, unsigned int element)
{
	addToList(s->headList, element);
}
/*
	this function is removing a node from the linked list
	input: the stack
	output: the value that has been removed
*/
int pop(Stack* s)
{
	int value = -1;
	linkedList* curr = s->headList;
	if (curr)
	{
		while (curr->next->next)
		{
			curr = curr->next;
		}
		value = curr->next->num;
		delete curr->next;
		curr->next = NULL;
	}
	return value;

}
/*
	this function is init the stack
	input: the stack
	output: none
*/
void initStack(Stack* s)
{
	s->headList = new linkedList;
	s->headList->num = 0;
	s->headList->next = NULL;
}
/*
	this function is cleaning the stack
	input: the stack
	output: none
*/
void cleanStack(Stack* s)
{
	linkedList* temp = new linkedList;
	while (s->headList)
	{
		temp = s->headList;
		s->headList = s->headList->next;
		delete temp;
	}
}
/*
	this function is checking if the stack is empty
	input: the stack
	output: if it is return true if it not return false
*/
bool isEmpty(Stack* s)
{
	if (s->headList->next == NULL)
	{
		return true;
	}
	return false;
}
/*
	this function is checking if the stack is full
	input: the stack
	output: if it is return true if it not return false
*/
bool isFull(Stack* s)
{
	return false;// the stack cannot be full 
}