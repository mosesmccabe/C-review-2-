/* Moses Peace Mccabe

    This program demonstrates an overloaded function template.
*/
#include <iostream>
using namespace std;

template <class P>
P sum(P num1, P num2)
{
  return num1 + num2;
}
template <class P>
P sum(P num1, P num2, P num3)
{
  return num1 + num2 + num3;
}

int main()
{
  double val1, val2, val3;

  // Get two values and display their sum.
  cout << "Enter two values: ";
  cin >> val1 >> val2;
  cout << "Their sum is " << sum(val1, val2) << endl;

  cout << "Enter three values: ";
  cin >> val1 >> val2 >> val3;
  cout << "Their sum is " << sum(val1, val2, val3) << endl;
}
