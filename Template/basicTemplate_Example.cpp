#include <iostream>
using namespace std;

template <class T>
T square (T number)
{
  return number * number;
}

int main()
{
  int tempI, resultI;
  float tempF, resultF;
  cout << "Enter a integer number: ";
  cin >> tempI;
  resultI = square(tempI);
  cout << "The square of " << tempI << " is " << resultI << "\n\n";
  cout << "Enter a number: ";
  cin >> tempF;
  resultF = square(tempF);
  cout << "The square of " << tempF << " is " << resultF << "\n\n";

  return 0;
}
