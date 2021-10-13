/* Moses Peace Mccabe

    This program demonstrates reading from one file 
    and writing to a second file.
*/
#include <iostream>
#include <fstream>
#include <string> 
#include <cctype>    // Needed for the "toupper" function.
using namespace std;

int main()
{
    string filename;    // To hold the user file name
    char ch;            // to hold a character
    ifstream inFile;    // Input file
    
    // open a file for output.
    ofstream outFile("out.txt");
    
    // Get the input file name.
    cout << "Enter a file name: ";
    cin >> filename;
    
    //Open the (new input) file
    inFile.open(filename);
    
    // If the input file opened successfully, cont.
    if(inFile)
    {
        // Read a char from file 1.
        inFile.get(ch);
        
        
        // While the last read operation was successful, cont.
        while (inFile)
        {
            //Write uppercase char to file 2.
            outFile.put(toupper(ch));
            
            // Read another char from file 1.
            inFile.get(ch);
        }
        
        // Close the two Files.
        inFile.close();
        outFile.close();
        cout << "File conversion done.\n";
    }
    else
        cout << "Cannot open " << filename << endl;
    return 0;
}