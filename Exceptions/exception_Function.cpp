#include <iostream>
#include <string>
using namespace std;

// Function Prototype
double divide(int, int);

int main()
{
  int n1, n2;
  float quotient;

  cout << "Enter two integer numbers: ";
  cin >> n1 >> n2;


  try
  {
        quotient = divide(n1, n2);
        cout << "The quotient is " << quotient << endl;
  }
  catch(string exceptionString)
  {
    cout << exceptionString;
  }
  cout << "\nEnd of the Program.\n";
  return 0;
}

double divide(int numerator, int denominator)
{
  if (denominator == 0)
  {
    string exceptionString = "ERROR: Cannot divide by zero.\n";
    throw exceptionString;
  }
  return numerator/denominator;
}
