/* 
    Moses Peace Mccabe

    This program demonstrates some character-testing functions.
*/
#include <iostream>
#include <cctype>
using namespace std;

/* This Fucntion determines whether the custNum parameter
   holds a valid customer number. 
   bool - return true or false
*/
bool testNum( char custNum[], int SIZE )
{
    int count = 0;  // Loop counter
    
    for (int n = 0; n < 3; n++)
    {
        if (!isalpha(custNum[n]))
            return false;
    }
    for ( int n = 3; n < SIZE - 1; n++)
    {
        if (!isdigit(custNum[n]))
            return false;
    }
            
    return true;
}


int main()
{
    // create a array of char
    const int SIZE = 8;         // Array Size
    char customer[SIZE];        // To hold a customer number
    
    // Get the customer number
    cout << "\n\nEnter a customer numberin the form LLLNNNN\n"
         << "(LLL = letters and NNNN = numbers): ";
    cin.getline(customer, SIZE);
    
    // Determine whether it is valid.
    if (testNum(customer, SIZE))
        cout << "This's a valid customer number.\n";
    else
    {
        cout << "This is not the proper format of the customer number.\n"
             << "Here is an example:\n     ABC1234\n";
    }
    
    return 0;

}