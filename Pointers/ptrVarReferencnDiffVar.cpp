/*
      This program demonstrates a pointer variable referencing
      difference variables
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 25, y = 50, z = 75;
    int* ptr;                       // Pointer variable
    
    
    cout << "\n\n\nHere are the value of x, y, and z:\n"
         << x << "  " << y << "  " << z << endl;
    
    // Use the ptr to manipulate x, y, and z.
    
    ptr = &x;        // store the address of x to ptr
    *ptr += 100;     // Add 100 the the value of x
    
    ptr = &y;        // store the address of y to ptr
    *ptr += 100;     // Add 100 to the value of y
    
    ptr = &z;        // stor the address of z to ptr
    *ptr += 100;     // Add 100 to the value of z;
    
    // Display the new values of x, y, and z
    cout << "Here are the new value of x, y, and z:\n"
         << x << "  " << y << "  " << z << "\n\n\n";
    
    return 0;
    
}