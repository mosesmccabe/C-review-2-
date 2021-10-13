
/* Peace
 
    This program demonstrates an enumerated data type.
        -- The enumerators can be think of as integer named constants
 */
#include <iostream>
using namespace std;


int main()
{

    enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
    
    const int SIZE = 5;
    double sales[SIZE];
    double total = 0.0;
    int index;

    // Get the sales for each day.
    for (index = MONDAY; index <= FRIDAY; index++)
    {
        cout << "Enter the sales for day " << index << ": ";
        cin >> sales[index];
    }
    
    // Calculate the total sales.
    for (index = MONDAY; index <= FRIDAY; index++)
        total += sales[index];
        
    // Display the total.
    cout << "The total sales are $" << total << endl;
        
    return 0;
}



        