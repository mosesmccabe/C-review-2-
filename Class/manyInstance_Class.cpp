/*   Moses Mccabe    3/16/2016
 
 This program creates three instances of the Rectangle class.
 (manyInstanceofSameClass.cpp)
 
 */
#include <iostream>
using namespace std;

// Rectangle class declaration.
class Rectangle
{
private:
    double width;
    double length;
public:
    void setWidth(double);
    void setLenght(double);
    
    double getLenght() const;
    double getWidth() const;
    double getArea() const;
};

// declear the Functions
void Rectangle::setWidth(double w)
{
    width = w;
};

void Rectangle::setLenght(double l)
{
    length = l;
};

// declear functions that reture
double Rectangle::getLenght() const
{
    return length;
};
double Rectangle::getWidth() const
{
    return width;
};
double Rectangle::getArea() const
{
    return width * length;
};

int main()
{
    // declear instances
    Rectangle kitchen;
    Rectangle bedroom;
    Rectangle den;
    
    // declaer local variable
    double temp;
    double totalArea;
    
    //Get the kitchen dimensions
    cout << "What is the kitchen's lenght: ";
    cin >> temp;
    kitchen.setLenght(temp);
    cout << "what is the kitchen's width: ";
    cin >> temp;
    kitchen.setWidth(temp);
    
    //Get value for bedroom
    cout << "What is the bedroom's length: ";
    cin >> temp;
    bedroom.setLenght(temp);
    cout << "What is the bedroom's width: ";
    cin >> temp;
    bedroom.setWidth(temp);
    
    //Get value for den
    cout << "What is the den's length: ";
    cin >> temp;
    den.setLenght(temp);
    cout << "What is the den's width: ";
    cin >> temp;
    den.setWidth(temp);
    
    //Display the data of the three variables
    cout << "There is the Kitchen data\n"
    << "Length: " << kitchen.getLenght()
    << "\nWidth: " << kitchen.getWidth()
    << "\nArea: " << kitchen.getArea() << endl;
    
    cout << "\nThere is the Bedroom data\n"
    << "Length: " << bedroom.getLenght()
    << "\nWidth: " << bedroom.getWidth()
    << "\nArea: " << bedroom.getArea() << endl;
    
    cout << "\nThere is the Den data\n"
    << "Length: " << den.getLenght()
    << "\nWidth: " << den.getWidth()
    << "\nArea: " << den.getArea() << endl;
    
    //Computer and Display the total of the three variables
    totalArea = kitchen.getArea() + bedroom.getArea() + den.getArea();
    
    cout << "\n\nThe total area of the three rooms is " << totalArea << endl;
    
    return 0;
    
}