/*    Moses Peace Mccabe
    
      This program uses a function to return
      a structure. 
      (ReturnnStruct.cpp)
*/
#include <iostream>
#include <cmath>
using namespace std;



// constant for pi
const double pi = 3.14159;

// Structure declaratiion
struct Circle
{
    double radius;     // A circle's radius
    double diameter;   // A circle's diameter
    double area;       // A circle's area
};

// Function Prototype
Circle getInfo();

int main()
{
    Circle c;   // Define a structure variable
    
    // Get data about the circle
    c = getInfo();
    
    // Computethe circle's area.
    c.area = pi * pow(c.radius, 2.0);   // area = (pi)r^2
    
    // Display the  circle area
    cout << "The radius and area of a circle are\n"
         << "Radius: " << c.radius
         << "\nArea: " << c.area << endl;
    
    return 0;
    
}


// This function use a local variable, temp which is a circle structure
Circle getInfo()
{
    Circle temp;       // Define temporary structure variable
    
    // Store circle data in temp variable
    cout << "Enter the diameter of a circle: ";
    cin >> temp.diameter;
    
    // compute the radius. which is half the diameter
    temp.radius = temp.diameter/2.0;
    
    // Reture the temporary variable
    return temp;
}