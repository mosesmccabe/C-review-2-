/*   Moses Peace Mccabe

      This program provides a simple demonstrates of the
      vector STL template
*/
#include <iostream>
#include <vector>  // To use the vector
using namespace std;

int main()
{
  int count; // loop counter

  // Define a vector object.
  vector<int> vect;

  /* Use the size member function to get
     the number of elements in the vector.
  */
  cout << "\nVect starts with " << vect.size() << " elements.\n";

  // Use push_back to push values into the vector
  for(count = 0; count < 10; count++)
    vect.push_back(count + 1);

  // Display the size of the vector
  cout << "Now Vect has " << vect.size() << " elements.\n";

  // Use the [] operator to display each element.
  for (count = 0; count < vect.size(); count++)
    cout << vect[count] << " ";

  cout << "\n\n";

  // Use the pop_back member function
  cout << "Popping the values out of the vector...\n";
  for (count = 0; count < 10; count++)
  {
    vect.pop_back();
  }

  // Display the size of the vector now.
  cout << "Now Vect has " << vect.size() << " elements.\n\n";

return 0;
}
