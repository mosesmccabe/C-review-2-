#include <iostream>
#include "MathStack.h"
using namespace std;

int main()
{
    int temp;
    MathStack math(2);   // create a stack of size 2
    
    // Add two value to stack
    cout << "\nPushing 10...\n";
    math.push(10);
    cout << "\nPushing 5...\n";
    math.push(5);
    
    // Use the add Function
    math.add();
    
    // display the result
    cout << "\nThe sum of 10 + 5 = ";
    math.pop(temp);
    cout << temp << "\n\n";
    
    // Use the Sub Function
    math.add();
    
    // Add two value to stack
    cout << "\nPushing 25...\n";
    math.push(25);
    cout << "\nPushing 15...\n";
    math.push(15);
    
    // Use the Sub Function
    math.sub();
    
    // display the result
    cout << "\nThe sum of 25 - 15  =  ";
    math.pop(temp);
    cout << temp << "\n\n";
    
    
}