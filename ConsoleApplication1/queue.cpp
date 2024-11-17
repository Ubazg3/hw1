#include <iostream>
#include "Queue.h"
using std::endl;// (למדנו על זה בשיעור השני ביום שני בהשלמה אז חשבתי שאפשר להשתמש(מותר להכניס דבר מסוים ולא את כל הספריה
using std::cout;
/*
	this function is init the queue
	input: the queue and the size
	output: none
*/
void initQueue(Queue* q, unsigned int size)
{
	int i = 0;
	q->arr = new unsigned int[size];
	for (int i = 0; i < size; i++)
	{
		q->arr[i] = 0;
	}
	q->countIn = 0;
	q->size = size;
}
/*
	this function is clearing the queue
	input: the queue
	output: none
*/
void cleanQueue(Queue* q)
{
	q->countIn = 0;
	q->size = 0;
	delete q->arr;
}
/*
	this function is adding one object to the queue
	input: the queue and the new value
	output: none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->arr[q->countIn] = newValue;
		q->countIn++;
	}
	else
	{
		cout << "there is no empty places left" << endl;
	}
}
/*
	this function is removing one object from the queue
	input: the queue
	output: the object (number)
*/
int dequeue(Queue* q)
{
	int num = q->arr[0];
	int i = 0;
	if (!isEmpty(q))
	{
		for (i = 1; i < q->countIn; i++)
		{
			q->arr[i - 1] = q->arr[i];
		}
		q->arr[q->countIn - 1] = 0;
		q->countIn--;
		return num;
	}
	else
	{
		return -1;
	}
}
/*
	this function is checking if the queue is empty
	input: the queue
	output: if it is return true if it not return false
*/
bool isEmpty(Queue* s)
{
	if (s->countIn == 0)
	{
		return true;
	}
	return false;
}
/*
	this function is checking if the queue is full
	input: the queue
	output: if it is return true if it not return false
*/
bool isFull(Queue* s)
{
	if (s->countIn == s->size)
	{
		return true;
	}
	return false;
}
