/*
 
 This program demonstrates an enumerated data type.
 -- The enumerators can be think of as integer named constants
 -- An anonymous enumerated type is simply one that does not have a name.
 */

#include <iostream>
using namespace std;

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

void displayDayName(Day d)
{
    switch(d)
    {
        case MONDAY:
            cout << "Monday\n";
            break;
        case TUESDAY:
            cout << "Tuesday\n";
            break;
        case WEDNESDAY:
            cout << "Wednesday\n";
            break;
        case THURSDAY:
            cout << "Thusday\n";
            break;
        case FRIDAY:
            cout << "Friday\n";
            break;
    }
}


int main()
{
    
    //enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
    
    const int SIZE = 5;
    double sales[SIZE];
    double total = 0.0;
    Day workDay;                        // loop counter
    
    // get the sale for each day.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
    {
        cout << "Enter the sales for day ";
        displayDayName(workDay);
        cout << ": ";
        cin >> sales[workDay];
    }
    
    // Calculate the total sales.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
    {
        total += sales[workDay];
    }
    
    // display the total
    cout << "The total sales are $" << total << endl;
    
    return 0;
}