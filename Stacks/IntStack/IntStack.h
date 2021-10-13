// Specification file for the IntStack class
#ifndef INTSTACK_H        // must be the same name of the file
#define INTSTACK_H

// ** create class
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
#endif