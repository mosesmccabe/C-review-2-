/*   Moses Mccabe

     This program uses nested structures.
*/
#include <iostream>
#include <string>
using namespace std;

// The Date structure holds data about a date.
struct Date
{
    int month;
    int day;
    int year;
};

// The place structure holds a physical address.
struct Place
{
    string address;
    string city;
    string state;
    string zip;
};

// The EmployeeInfo structure holds an employee's data
struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date birthday;           // Nested Structure
    Place residence;         // Nested Structure
};

int main()
{
    // Define a structure variable to hold info about the manager.
    EmployeeInfo manager;
    
    // Get the manager's name and employee number
    cout << "Enter the manager's name: ";
    getline(cin, manager.name);
    cout << "Enter the manager's employee number: ";
    cin >> manager.employeeNumber;
    
    // Get the manager's birth date
    cout << "Now enter the manager's date of birth.\n";
    cout << "Month (Up to 2 digits): ";
    cin >> manager.birthday.month;
    cout << "Day (up to 2 digits): ";
    cin >> manager.birthday.day;
    cout << "Year: ";
    cin >> manager.birthday.year;
    cin.ignore();   // Skip the remaining newline character
    
    // Get the manager's residence information
    cout << "Enter the manager's street address: ";
    getline(cin, manager.residence.address);
    cout << "City: ";
    getline(cin, manager.residence.city);
    cout << "State: ";
    getline(cin,manager.residence.state);
    cout << "ZIP Code: ";
    getline(cin, manager.residence.zip);
    
    // Display the information just entered
    cout << "\nHere is the manager's information:\n"
         << "Name: " << manager.name
         << "\nEmployee Number: " << manager.employeeNumber
         << "\nDate of Birth: "
         << manager.birthday.month << "-"
         << manager.birthday.day << "-"
         << manager.birthday.year
         << "\nPlace of residance: "
         << manager.residence.address << "\n"
         << manager.residence.city << ", "
         << manager.residence.state << " "
         << manager.residence.zip << endl;
    
    return 0;
}
