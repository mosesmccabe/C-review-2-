/*   Moses Peace Mccabe
 
 This program demonstrates the use of structures
 (UseOfStruct.cpp)
 
 */
#include <iostream>
#include <string>
using namespace std;

struct PayRoll
{
    int empNumber;     // Employee number
    string name;       // Enployee name
    double hours;      // Hours worked
    double payRate;    // Hourly payRate
    double grossPay;   // Gross pay
};

int main()
{
    PayRoll employee;    // employee is a Payroll structure
    
    // Get the employee's number:
    cout << "Enter the employee's number: ";
    cin >> employee.empNumber;
    
    
    cin.ignore();
    // Get the employee's name
    cout << "Enter the employee's name ";
    getline(cin, employee.name);
    
    // Get the hours work by the employee
    cout << "How many hours did the employee work? ";
    cin >> employee.hours;
    
    // Get the employee pay rate
    cout << "What is the emplayee hourly payrate? ";
    cin >> employee.payRate;
    
    // calculate the employee's gross pay
    employee.grossPay = employee.hours * employee.payRate;
    
    // Display the employee data
    cout << "Here is the employee's payroll data:\n"
    << "Name: " << employee.name
    << "\nNumber: " << employee.empNumber
    << "\nHours Work: " << employee.hours
    << "\nHourly payRate: " << employee.payRate
    << "\nGross Pay: $" << employee.grossPay << "\n";
    
    return 0;
}