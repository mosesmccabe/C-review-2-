/* 
    This program lets the user enter a number. The
    dollarFormat function formats the number as
    a dollar amount.
*/
#include <iostream>
#include <string>
using namespace std;

/*     Dollar Function

    This function accepts a string reference object,
    which is assumed to hold a number wiht a decimal
    point. The function formats the number as a dollar
    amount with commas as a $ symbol. 
*/
void dollarFormating( string &currency)
{
    int dp;
    
    dp = currency.find('.');   // Find decimal point
    if (dp > 3)
    {
        for (int x = dp - 3; x > 0; x -= 3)
            currency.insert(x, ",");
    }
    currency.insert(0, "$");    // Insert dollar sign
}

int main()
{
    string input;
    
    // Get the dollar amount from the user.
    cout << "Enter a dollar amount in the form nnnnn.nn :  ";
    cin >>input;
    dollarFormating(input);
    cout << "Here is the amount formatted:\n";
    cout << input << endl;
    return 0;
}