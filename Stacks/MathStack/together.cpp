

#include <iostream>
#include <stack>
using namespace std;



//------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------


class MathStack : public IntStack       // A chile of IntStack
{
public:
    MathStack(int s) : IntStack(s)
    {}
    
    // mathstack function
    void add();
    void sub();
};


void MathStack::add()
{
    int num, sum;
    
    // pop the first two number for the stack
    pop(sum);
    pop(num);
    
    // add the numbers
    sum += num;
    
    // push "sum" into the stack
    push(sum);
}
/*
 Sub Function
 pops the first two number for
 stacks and sub the second number from
 the first
 push difference in stack
 */
void MathStack::sub()
{
    int num, diff;
    
    // pop the first two number for the stack
    pop(diff);
    pop(num);
    
    // add the numbers
    diff -= num;
    
    // push "sum" into the stack
    push(diff);
}


int main()
{
    int temp;
    MathStack math(4);   // create a stack of size 2
    
    // Add two value to stack
    cout << "\nPushing 10...\n";
    math.push(10);
    cout << "\nPushing 5...\n";
    math.push(5);
    
    // Use the add Function
    math.add();
    
    // display the result
    cout << "\nThe sum of 10 + 5 = ";
    math.pop(temp);
    cout << temp << "\n\n";
    
    // Use the Sub Function
    math.add();
    
    // Add two value to stack
    cout << "\nPushing 25...\n";
    math.push(15);
    cout << "\nPushing 15...\n";
    math.push(25);
    
    // Use the Sub Function
    math.sub();
    
    // display the result
    cout << "\nThe sum of 25 - 15  =  ";
    math.pop(temp);
    cout << temp << "\n\n";
    
    
}