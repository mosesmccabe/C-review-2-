/*  Moses Mccabe     3/3/2016


    this program demonstrates partially initialized
    (InitializeStrucVariable.cpp)
*/
#include <iostream>
#include <string>
using namespace std;

struct PayRoll
{
    
    string name;       // Enployee name
    int empNumber;     // Employee number
    double payRate;    // Hourly payRate
    double hours;      // Hours worked
    double grossPay;   // Gross pay
};

int main()
{
    PayRoll employee1 = {"Betty Ross", 141, 18.75, 30};    // employee is a Payroll structure
    PayRoll employee2 = {"Jill Sandburg", 142, 17.50, 40};
    
    
   
    
    // Display the employee data
    employee1.grossPay = employee1.hours * employee1.payRate;
    cout << "Here is the employee's payroll data:\n"
    << "Name: " << employee1.name
    << "\nNumber: " << employee1.empNumber
    << "\nHours Work: " << employee1.hours
    << "\nHourly payRate: " << employee1.payRate
    << "\nGross Pay: $" << employee1.grossPay << "\n";
    
    // Display the employee data
    employee2.grossPay = employee2.hours * employee2.payRate;
    cout << "\n\n\nHere is the employee's payroll data:\n"
    << "Name: " << employee2.name
    << "\nNumber: " << employee2.empNumber
    << "\nHours Work: " << employee2.hours
    << "\nHourly payRate: " << employee2.payRate
    << "\nGross Pay: $" << employee2.grossPay << "\n";
    
    return 0;
}