/*  
    This program demonstrates a pointer to const parameter
*/
#include <iostream>
using namespace std;


void displayValues( const int *numbers, int size)
{
    // Display all the values.
    for (int n = 0; n < size; n++)
    {
        cout << numbers[n] << " ";
        
        /*     Another Way
           cout << *numbers << " ";
           numbers++;
        */
        
        /*    Another Way
          cout << *(numbers + n) << " ";
        */
    }
    cout << endl;
}

int main()
{
    // Array
    const int SIZE = 6;
    
    const int array1[SIZE] = {1, 2, 3, 4, 5, 6};
    // nonconst array
    int array2[SIZE] = {2, 4, 6, 8, 10, 12};
    
    
    cout << "\n\n\n";
    //Display the contents of the const array
    displayValues(array1, SIZE);
    
    //Display the contents of nonconst array
    displayValues(array2, SIZE);
    
    cout << "\n\n\n";
    
    return 0;
}