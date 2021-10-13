/*
 This program uses a structure variable to read a record from a file.
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
    fstream people("people.dat", ios::in | ios::binary);
    
    // Test for errors.
    if(!people)
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }
    
    cout << "Here are the people in the file:\n\n";
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    
    // while not at the end of file, display the records.
    while (!people.eof() )
    {
        // Display the record.
        cout << "Name: " << person.name << "\n"
             << "Age: " << person.age << "\n"
             << "Address line 1: " << person.address1 << "\n"
             << "Address line 2: " << person.address2 << "\n"
             << "Phone #: " << person.phone << endl;
        
        // Wait for the user to press any key.
        cout << "\nPress the Enter Key to see the next record.\n";
        cin.get(again);
        
        // Read the next record from the file.
        people.read(reinterpret_cast<char *>(&person), sizeof(person));
    }
    
    cout << "This's all the data in the file\n";
    people.close();
    
    return 0;
    
}
    