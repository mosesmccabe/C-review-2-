#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;                   // Base case
    }
    else
    {
        return n * fact(n - 1);    //  REcursive case
    }
}

int main()
{
    int number, the_factorial;
    cout << "Enter a integer: ";
    cin >> number;
    // pass value to function
    the_factorial = fact(number);
    
    // here is the factore
    cout << "The factore of " << number << " is " << the_factorial << endl;
}