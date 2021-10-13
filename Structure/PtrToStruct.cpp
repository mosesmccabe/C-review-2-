/*   Moses Mccabe 
     
     This program demonstrates a function that uses
     a pointer to a structure variable as a parameter.
*/
#include <iostream>
#include <string>
using namespace std;

// Structure for student
struct Student
{
    string name;        // student's name
    int idNum;          // student's ID
    int creditHours;    // Credit hours enrolled
    double gpa;
};


// Function Prototype
void getData(Student *);

int main()
{
    Student freshmen;    // Define structure variable
    
    // Get the student data
    cout << "Enter the following student data\n";
    getData(&freshmen);   // Pass the address of freshmen
    
    // Display Data User Enter
    cout << "\nHere is the student data stored in freshmen.\n"
         << "Student Name: " << freshmen.name
         << "\nStudent ID: " << freshmen.idNum
         << "\nCredit Hours: " << freshmen.creditHours
         << "\nGPA: " << freshmen.gpa << endl;
    
    return 0;
    
}

void getData(Student *s)
{
    // Get the student name.
    cout << "Name: ";
    getline(cin, s->name);
    cout << "Student ID: ";
    cin >> s->idNum;
    cout << "Number Hours Enrolled: ";
    cin >> s->creditHours;
    cout << "Current GPA: ";
    cin >> s->gpa;
}