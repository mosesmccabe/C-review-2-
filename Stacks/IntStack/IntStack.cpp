// Implementation file for the IntStack class
#include <iostream>
#include "IntStack.h"
using namespace std;

/* 

    1. Constructor
        This constructor creates an empty stack. 
        The size parameter is the size of the stack
*/

IntStack::IntStack(int size)
{
    stackArray = new int[size];     // create an empty stock of length SIZE
    stackSize = size;               // whatever size the user enter
    top = -1;
}

/*
    Copy constructor
*/

IntStack::IntStack(const IntStack &obj)
{
    // create the stack array.
    if (obj.stackSize > 0)
    {
        stackArray = new int[obj.stackSize];
    }
    else
        stackArray = NULL;
    
    //copy the stackSize attribute
    stackSize = obj.stackSize;
    
    // Copy the stack contents.
    for (int count = 0; count < stackSize; count++)
    {
        stackArray[count] = obj.stackArray[count];
    }
    
    // Set the top of the stack
    top = obj.top;
}
/*
    Destructor
*/
IntStack::~IntStack()
{
    delete [ ] stackArray;
}
/*
    Member function pushes the argument onto
    the stack.
*/
void IntStack::push(int num)
{
    if( isFull())
    {
        cout << "The stack is full.\n";
    }
    else
    {
        top++;
        stackArray[top] = num;
    }
}
/*
    pop pops the value at the top of the stack off, and copies
    it into the variable passed as an argument.
*/
void IntStack::pop(int &num)
{
    if (isEmpty())
    {
        cout << "The stack is empty.\n";
    }
    else
    {
        num = stackArray[top];
        top--;
    }
}
/*
    isFull returns true if the stack
    is full, or false otherwise.
*/
bool IntStack::isFull() const
{
    bool status;
    
    if (top == (stackSize - 1))
        status  = true;
    else
        status = false;
    
    return status;
}
/*
    isEmpty returns true if the
    stack is empty, or fale otherwise
*/
bool IntStack::isEmpty() const
{
    bool status;
    
    if (top ==  -1)
        status  = true;
    else
        status = false;
    
    return status;
}
    
