#include <iostream>
using namespace std;

class Rectangle
{
private:
  double width;  // the rectangle width
  double length; // the rectangle length
public:
  // Exception class for a negative width
  class NegativeWidth
  { };
  // Exception class for a negative length
  class NegativeLength
  { };
  // Default constructor
  Rectangle()
  {
    width = 0.0;
    length = 0.0;
  }
  // set value Function
  void setWidth(double);
  void setLength(double);
  // Get the value of variable
  double getWidth( ) const
  { return width; }
  double getLeght( ) const
  { return length; }
  // Multiple the width and length
  double getArea() const
  { return width * length; }
};

void Rectangle::setWidth(double w)
{
  if (w >= 0)
    width = w;
  else
    throw NegativeWidth();
}
void Rectangle::setLength(double l)
{
  if(l >= 0)
    length = l;
  else
    throw NegativeLength();
}

int main()
{
  double width, length;

  // Create a Rectangle Object.
  Rectangle myRectangle;

  // Get the width and length
  cout << "Enter the rectangle's width: ";
  cin >> width;
  cout << "Enter the rectangle's length: ";
  cin >> length;

  // Store these values in the Rectangle object.
  try
  {
    myRectangle.setWidth(width);
    myRectangle.setLength(length);
  }
  catch (Rectangle::NegativeWidth)
  {
    cout << "Error: A negative value was given"
         << "for the rectangle's width.\n";
  }
  catch (Rectangle::NegativeLength)
  {
    cout << "Error: A negative value was given"
         << "for the rectangle's Length.\n";
  }

  cout << "End of the program.\n";
  return 0;
}
