#include "Utils.h"
#include <iostream>
#include "Stack.h"
using std::cin;
using std::cout;
using std::endl;
#define SIZE_OF_ARRAY 10
/*
    this function is reversing an array using stack
    input: the array and its size
    output: none
*/
void reverse(int* nums, unsigned int size)
{
    int i = 0;
    Stack s;
    initStack(&s);
    for (i = 0; i < size; i++) 
    {
        push(&s, nums[i]);
    }
    for (i = 0; i < size; i++) 
    {
        nums[i] = pop(&s);
    }
    cleanStack(&s);
}
/*
    this function is reversing an array got from the user
    input: none
    output: the array
*/
int* reverse10()
{
    int i = 0;
    int* nums = new int[SIZE_OF_ARRAY];
    cout << "Please enter 10 integers:" << endl;
    for (i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cin >> nums[i];
    }
    reverse(nums, SIZE_OF_ARRAY);
    return nums;
}
