/* 
    This program uses a structure variable to store a record to a file.
*/
#include <iostream>
#include <fstream>
using namespace std;

// Array sizes
const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

// Declare a structure for the record.
struct Info
{
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE],
         address2[ADDR_SIZE],
           phone[PHONE_SIZE];
};

int main()
{
    Info person;      // To hold info about a person
    char again;      // To hold Y or N
    
    // Open a file for binary output
    fstream people("people.dat", ios::out | ios::binary);
    
    do
    {
        // Get data about a person.
        cout << "Enter the following data about a person:\n"
             << "Name: ";
        cin.getline(person.name, NAME_SIZE);
        cout << "Age: ";
        cin >> person.age;
        cin.ignore();   // Skip over the remaining newline.
        cout << "Address line1\n";
        cin.getline(person.address1, ADDR_SIZE);
        cout << "Address line2\n";
        cin.getline(person.address2, ADDR_SIZE);
        cout << "Phone #: ";
        cin.getline(person.phone, PHONE_SIZE);
        
        // Write the contents of the person structure to the file.
        people.write(reinterpret_cast<char *>(&person), sizeof(person));
        
        // Determine whether the user wants to reite another record.
        cout << "Do you want to enter anouther record? ";
        cin >> again;
        cin.ignore();
    } while (again == 'Y' || again == 'y');
    
    // close the file
    people.close();
    return 0;
}