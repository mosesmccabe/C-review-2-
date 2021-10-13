/*
    This program demonstrates a function that returns a pointer
*/
#include <iostream>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
using namespace std;

// Function
int *getRandomNumbers(int num)
{
    int *arr = 0;   
    
    if (num <= 0)
        return 0;
    
    // dyamically allocate the array.
    arr = new int[num];
    
    //srand ( time(0) );
    // populate the array with random numbers
    for (int n = 0; n < num; n++)
        arr[n] = (n + 2);
    
    // Return a pointer to the array.
    return arr;
}

int main()
{
    int *numbers = 0;
    
    // Get an array of five random numbers
    numbers = getRandomNumbers(5);
    
    // Display the numbers
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << endl;
        
    // Free the memory.
    delete [] numbers;
    numbers = 0;
    
    return 0;
}