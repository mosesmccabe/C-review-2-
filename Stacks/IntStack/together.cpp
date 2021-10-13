#include <iostream>
using namespace std;


class IntStack
{
private:
    int *stackArray;   // Pointer to the stack array
    int stackSize;     // The stack size
    int top;           // Indicates the top of the stack
    
public:
    // Constructor
    IntStack(int);                                 // prototype
    
    // Overload Constructor
    IntStack(const IntStack &);                    // prototype
    
    // Destructor
    ~IntStack();
    
    // Stack operations
    void push(int);
    void pop(int &);
    bool isFull() const;
    bool isEmpty() const;
};

/*
 
 1. Constructor
 This constructor creates an empty stack.
 The size parameter is the size of the stack
 */

IntStack::IntStack(int size)
{
    stackArray = new int[size];     // create an empty stock of length SIZE
    stackSize = size;               // whatever size the user enter
    top = -1;
}

/*
 Copy constructor
 */

IntStack::IntStack(const IntStack &obj)
{
    // create the stack array.
    if (obj.stackSize > 0)
    {
        stackArray = new int[obj.stackSize];
    }
    else
        stackArray = NULL;
    
    //copy the stackSize attribute
    stackSize = obj.stackSize;
    
    // Copy the stack contents.
    for (int count = 0; count < stackSize; count++)
    {
        stackArray[count] = obj.stackArray[count];
    }
    
    // Set the top of the stack
    top = obj.top;
}
/*
 Destructor
 */
IntStack::~IntStack()
{
    delete [ ] stackArray;
}
/*
 Member function pushes the argument onto
 the stack.
 */
void IntStack::push(int num)
{
    if( isFull())
    {
        cout << "The stack is full.\n";
    }
    else
    {
        top++;
        stackArray[top] = num;
    }
}
/*
 pop pops the value at the top of the stack off, and copies
 it into the variable passed as an argument.
 */
void IntStack::pop(int &num)
{
    if (isEmpty())
    {
        cout << "The stack is empty.\n";
    }
    else
    {
        num = stackArray[top];
        top--;
    }
}
/*
 isFull returns true if the stack
 is full, or false otherwise.
 */
bool IntStack::isFull() const
{
    bool status;
    
    if (top == (stackSize - 1))
        status  = true;
    else
        status = false;
    
    return status;
}
/*
 isEmpty returns true if the
 stack is empty, or fale otherwise
 */
bool IntStack::isEmpty() const
{
    bool status;
    
    if (top ==  -1)
        status  = true;
    else
        status = false;
    
    return status;
}

int main()
{
    int catchVar;          // To hold values popped off the stack
    
    // Define a stack object to hold 5 values.
    IntStack stack(5);
    
    // Push values onto the stack.
    cout << "\npushing 5\n";
    stack.push(5);
    cout << "pushing 10\n";
    stack.push(10);
    cout << "pushing 15\n";
    stack.push(15);
    cout << "pushing 20\n";
    stack.push(20);
    cout << "pushing 25\n";
    stack.push(25);
    
    // Pop and display the values
    cout << "\n\nPopping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    
    return 0;
}