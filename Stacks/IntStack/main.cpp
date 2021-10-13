/*  Moses Peace Mccabe

    This program demonstrates the IntStack class.
*/
#include <iostream>
#include "IntStack.h"      // the IntStack class header file
using namespace std;

int main()
{
    int catchVar;          // To hold values popped off the stack
    
    // Define a stack object to hold 5 values.
    IntStack stack(5);
    
    // Push values onto the stack.
    cout << "pushing 5\n";
    stack.push(5);
    cout << "pushing 10\n";
    stack.push(10);
    cout << "pushing 15\n";
    stack.push(15);
    cout << "pushing 20\n";
    stack.push(20);
    cout << "pushing 25\n";
    stack.push(25);
    
    // Pop and display the values
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    
    return 0;
}