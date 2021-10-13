/*
                          Enum
    An enumerated data type is a programmer-defined data type.
    it consist of values known as enumerators, which represent integer constants.
*/
#include <iostream>
using namespace std;

int main()
{
    enum Day { Monday = 1, Tuesday, Wednesday, Thursday, Friday };
    int Day;
    
    cout << Monday << "\n" << Tuesday << "\n"
         << Wednesday << "\n" << Thursday << "\n"
         << Friday << "\n";
    
    // Switch
    cout << "\n\n1 - Monday\n"
         << "2 - Tuesday\n"
         << "3 - Wednesday\n"
         << "4 - Thursday\n"
         << "5 - Friday\n"
         << "Enter a choice: ";
    cin >> Day;
    
    cout << "\n\n";
    switch (Day)
    {
        case Monday:
            cout << "Monday\n";
            break;
        case Tuesday:
            cout << "Tuesday\n";
            break;
        case Wednesday:
            cout << "Wednesday\n";
            break;
        case Thursday:
            cout << "Thursday\n";
            break;
        case Friday:
            cout << "Friday\n";
            break;
        default:
            cout << Day << " is not a Option\n";
            break;
    }
    
    
    // Using enumerate variable
    int weekday = Friday;
    cout << "\n" << weekday << endl;
    
    // Using comparison statement with enum
    if (Friday > Monday)
        cout << "\nFriday is greater than Monday.\n\n";
    
    
    return 0;
    
    
}