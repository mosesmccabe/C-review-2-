/*   
    This program demonstrates that a pointer may be used as a
    parameter to accept the address of an array.
*/
#include <iostream> 
using namespace std;



/* 
                                Functions 1
    This function uses a pointer to accept the address of an array of doubles.
    The function asks the user to enter sales figures and stores them in the array.
*/
void getSales(double *arr, int size)
{
    for(int n = 0; n < size; n++)
    {
        cout << "Enter the sales figure for quarter "
             << (n + 1) << ": ";
        cin >> arr[n];
    }
}

/*
                                Function 2
    This function uses a pointer to accept the address of an array. 
    The function returns the total of the elements in the array.
*/
double totalSales(double *arr, int size)
{
    double sum = 0.0;
    
    for(int n = 0; n < size; n++)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}

int main()
{
    const int SIZE = 4;
    double sales[SIZE];
    
    cout << "\n\n\n";
    // Get the sales data for all quarters
    getSales(sales, SIZE);
    
    // Display te total sale for the year.
    cout << "The total sales for the year are $"
         << totalSales(sales, SIZE) << "\n\n\n";
}
