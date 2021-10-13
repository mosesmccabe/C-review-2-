/*  Moses Peace Mccabe

  * A stack may be implemented as a linked list and expand or shrink with each
    push or pop operation.
 
  * A dynamic stack simply starts as an empty linked list
    then expands by one node each time a value is pushed
 
  * A dynamic Stock will never be full, as long as the system has enough free memory.
*/

#include <iostream>
using namespace std;

class DynamicStack
{
private:
    struct stackNode
    {
        int value;
        stackNode *next;
        
        stackNode(int value, stackNode *next = NULL)
        {
            this->value = value;
            this->next = next;
        }
    };
    stackNode *top;
    
public:
    DynamicStack()   // constructor
    {
        top = NULL;
    }
    
    void push(int number)
    {
        top = new stackNode(number, top);
    }
    int pop()
    {
        int number = top->value;    // get value
        stackNode *temp = top;      // create a temp stackNode pointer, so we can delete
        top = top->next;            // reassingn top
        delete temp;                // delete the old address
        // return the value
        return number;
    }
    bool isEmpty()
    {
        if (top == NULL)
            return true;
        else
            return false;
    }
};

int main()
{
    // create a DynamicStack object
    DynamicStack stack;
    
    // create a temp integer variable for user input
    int temp, SIZE = 0;
    char replay;
    
    for( ; ; )
    {
        cout << "\nAdd a integer to the stack: ";
        cin >> temp;
        stack.push(temp);
        
        // increment size
        SIZE++;
        
        cout << "\n\nEnter another value (y/n): ";
        cin >> replay;
        if (replay == 'n')
            break;
    }
    
    // display the value in the stack
    for (int n = 0; n < SIZE; n++)
    {
        cout << "Popping...\n" << stack.pop() << endl;
    }
    cout << endl;
    
}