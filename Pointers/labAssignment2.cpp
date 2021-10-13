/*     Moses Peace Mccabe

    Memory pointers allow us to access variable or array data
    from multiple places not just through the variable or array index. 
    (labAssignemt2.cpp)
*/
#include <iostream>
using namespace std;


void calculator( float *num1, float *num2, float *Sum, float *Diff, float *Prod )
{
    
    *Sum = *num1 + *num2;
    *Diff = *num1 - *num2;
    *Prod = *num1 * *num2;
}




int main()
{
    // loop variable
    int replay = 1;
    
    
    float number1, number2, Sum, Diff, Prod;
    
    float *pnum1 = &number1,
          *pnum2 = &number2,
          *pSum = &Sum,
          *pDiff = &Diff,
          *pProd = &Prod;
    
    
    
  while(replay == 1)
  {
    
    // Get user input
    cout << "\n\nEnter a Decimal Number (EX: 12.34, 100.5, 1.2,...): ";
    cin >>  *pnum1;
    cout << "Enter a Decimal Number (EX: 12.3, 3.89, 20.6,...)  ";
    cin >> *pnum2;
    
    // Call the calculation function
    calculator(pnum1, pnum2, pSum, pDiff, pProd);
    
    // Display Result
    cout << "\n\n" << number1 << " + " << number2 << " = " << Sum << "\n"
         << number1 << " - " << number2 << " = " << Diff << "\n"
         << number1 << " * " << number2 << " = " << Prod << "\n\n";
   
    cout << "Run Again (1 - yes and Anything - no): ";  // If user want to run again 123
    cin >> replay;
  }
    
    return 0;
    
    

}