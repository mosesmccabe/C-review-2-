/*  Moses Peace Mccabe   *  5/12/2015
 
 This program has functions that accept structure variables
 (structAsFunctionArgument.cpp)
 
 */
#include<iostream>
#include<string>
using namespace std;

struct InventoryItem
{
    int partNum;
    string description;
    int onHand;
    double price;
};

/*   Function Prototypes
 * The function will use the InventoryItem structure...
 variable as their parameter.
 * The compiler must know what InventoryItem is before it
 encounters any definition for the variable of that type.
 */

void getItem(InventoryItem&);   // Argument passed by reference
void showItem(InventoryItem);   // Argument passed by value

int main()
{
    InventoryItem part;  // Variable define to hold the structure variable
    
    getItem(part);      // sent structure variable to function getItem.
    showItem(part);     // sent struct variable to function showItem.
    
    return 0;
}

/* **********************************************************
 define the function getItem. and pass the structure variable
 by reference. And ask the user for info to store in the struct
 ************************************************************ */
void getItem(InventoryItem &p)
{
    cout << "Enter the part number: ";
    cin >> p.partNum;
    
    cin.ignore();
    cout << "Enter the part description: ";
    getline(cin,p.description);
    
    cout << "Enter the quantity on hand: ";
    cin >> p.onHand;
    
    cout << "Enter the unit price: ";
    cin >> p.price;
    
}

/* ****************************************************************
 Define the function showItem. and display the value store in the
 sturcture.
 **************************************************************** */

void showItem(InventoryItem p)
{
    //cout << fixed << setprecision(2) << showpoint;
    cout << "\n\nPart Number: " << p.partNum << endl;
    cout << "Description: " << p.description << endl;
    cout << "Units on Hand: " << p.onHand << endl;
    cout << "Price: " << p.price << endl;
}
