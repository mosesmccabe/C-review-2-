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

  // Define an iterator object.
  vector<int>::iterator iter;

  /* Use the size member function to get
     the number of elements in the vector.
  */
  cout << "\nVect starts with " << vect.size() << " elements.\n";

  // Use push_back to push values into the vector
  for(count = 0; count < 10; count++)
    vect.push_back(count + 1);


  // Step the iterator through the vector,
  // and use it to display the vector's contents.
  for (iter = vect.begin(); iter < vect.end(); iter++)
    cout << *iter << " ";

  cout << "\n\n";

  // Step the interator throught hte vector backwards
  for (iter = vect.end() - 1; iter >= vect.begin(); iter--)
    cout << *iter << " ";

cout << "\n\n";

return 0;
}
