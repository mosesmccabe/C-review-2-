/*   Moses Peace Mccabe

    This program demonstrates a union.
*/
#include <iostream>
using namespace std;

// create a Union
union PaySource
{
    int hours;     // Hours worked
    float sales;   // Amount of sales
};


int main()
{
    PaySource employee1;         // Define a union variable
    char payType;                // To hold the pay type
    float payRate;
    float grossPay;
    
    cout << "This program calculates either hourly wages or\n"
         << "sales commission.\n";
    
    // Get the pay type, hourly or commission.
    cout << "Enter H for hourly wages or C for commission: ";
    cin >> payType;
    
    // Determine the gross pay, depending on the pay type
    if (payType == 'H' || payType == 'h')
    {
        // get the pay rate and hour worked
        cout << "What is the hourly pay rate? ";
        cin >> payRate;
        cout << "How many hours were worked? ";
        cin >> employee1.hours;
        
        // calculate and display the gross pay
        grossPay = employee1.hours * payRate;
        cout << "Gross pay: $" << grossPay << endl;
    }
    else if (payType == 'C' || payType == 'c')
    {
        cout << "What are the total sales for this employee? ";
        cin >> employee1.sales;
        
        // Calculate and display the gross pay
        grossPay = employee1.sales * 0.10;
        cout << "Gross pay: $" << grossPay << endl;
    }
    else
    {
        // The user made an invalid selection
        cout << payType << " is not a valid selection.\n";
    }
    
    return 0;
}