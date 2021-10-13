/* 

    This program uses two functions that accept 
    addresses of variables as arguments.
*/
#include <iostream>
using namespace std;

// Function
void getNumber(int *input)
{
    cout << "\n\n\nEnter a integer (Ex: 1,2,3,4,5,6,....n): ";
    cin >> *input;
}
void doubleValue(int *val)
{
    *val *= 2;
}


int main()
{
    int number;
    
    // call the getNumber function and pass the address on number
    getNumber( &number );
    
    // call the doubleValue function and pass the address of number
    doubleValue( &number );
    
    // Display the value in number.
    cout << "That value double is  " << number << "\n\n\n";
    
    return 0;
}
