// This program uses the & operator to determine a variable's


#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    cout << "\n\n\n";
    cout << "The address of x is " << &x << endl;
    cout << "The size of x is " << sizeof(x) << " bytes\n";  // why
    cout << "The value in x is " << x << "\n\n\n";
}