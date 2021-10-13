// This program demonstrates the use of the indirection operator.

#include <iostream> 
using namespace std;

int main()
{
    int x = 25;
    int* ptr = 0;
    
    ptr = &x;   // Store the address of x in ptr
    
    cout << "\n\n\nHere are the value of x, printed twice:\n"
         << x << "\n"
         << *ptr << endl;   // Displays the contents of x
    
    *ptr = 100;            // This will actually assign 100 to x
    
    cout << "Here are the new value of x:\n"
         << x << "\n"
         << *ptr << "\n\n\n";
    
    return 0;
    
}