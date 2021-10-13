/*   
    This program shows an array name being dereferenced
    with the * operator
*/
#include <iostream>
using namespace std;

int main()
{
    int number[] = {10, 20, 30, 40, 50};
    
    cout << "\n\n\nElements in the array are:\n";
    for (int n = 0; n < 5; n++)
        cout << *(number + n) << endl;
    
    cout << "\n\n";
    
    return 0;
}