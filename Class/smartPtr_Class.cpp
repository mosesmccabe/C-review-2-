/*   Moses Mccabe    3/16/2016
 
 This program creates three instances of the Rectangle class.
 And Pass those variable to a Pointer
 
 Using the -> operator to access and display the class member
 
 Also, this program dynamically allocate the object
 - "new"    operator
 
 
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
    //Rectangle *kitchenPtr = nullptr;
    //Rectangle *bedroomPtr = nullptr;
    //Rectangle *denPtr = nullptr;
    
    // Dynamically allocate the Objects
    unique_ptr<Rectangle> kitchenPtr(new Rectangle);
    unique_ptr<Rectangle> bedroomPtr(new Rectangle);
    unique_ptr<Rectangle> denPtr(new Rectangle);
    
    //kitchenPtr = new Rectangle;
    //bedroomPtr = new Rectangle;
    //denPtr = new Rectangle;
    
    // declaer local variable
    double temp;
    double totalArea;
    
    //Get the kitchen dimensions
    cout << "What is the kitchen's lenght: ";
    cin >> temp;
    kitchenPtr->setLenght(temp);
    cout << "what is the kitchen's width: ";
    cin >> temp;
    kitchenPtr->setWidth(temp);
    
    //Get value for bedroom
    cout << "What is the bedroom's length: ";
    cin >> temp;
    bedroomPtr->setLenght(temp);
    cout << "What is the bedroom's width: ";
    cin >> temp;
    bedroomPtr->setWidth(temp);
    
    //Get value for den
    cout << "What is the den's length: ";
    cin >> temp;
    denPtr->setLenght(temp);
    cout << "What is the den's width: ";
    cin >> temp;
    denPtr->setWidth(temp);
    
    //Display the data of the three variables
    cout << "There is the Kitchen data\n"
    << "Length: " << kitchenPtr->getLenght()
    << "\nWidth: " << kitchenPtr->getWidth()
    << "\nArea: " << kitchenPtr->getArea() << endl;
    
    cout << "\nThere is the Bedroom data\n"
    << "Length: " << bedroomPtr->getLenght()
    << "\nWidth: " << bedroomPtr->getWidth()
    << "\nArea: " << bedroomPtr->getArea() << endl;
    
    cout << "\nThere is the Den data\n"
    << "Length: " << denPtr->getLenght()
    << "\nWidth: " << denPtr->getWidth()
    << "\nArea: " << denPtr->getArea() << endl;
    
    //Computer and Display the total of the three variables
    totalArea = kitchenPtr->getArea() + bedroomPtr->getArea() + denPtr->getArea();
    
    cout << "\n\nThe total area of the three rooms is " << totalArea << endl;
    
    return 0;
    
}