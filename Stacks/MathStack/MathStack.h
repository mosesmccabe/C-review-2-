// Specification file for the MathStack class
#ifndef MATHSTACK_H
#define MATHSTACK_H
/*
    move outside the current file and into 
    the IntStack file
*/
#include "../IntStack/IntStack.h"

class MathStack : public IntStack       // A chile of IntStack
{
public:
    MathStack(int s) : IntStack(s)
    {}
    
    // mathstack function
    void add();
    void sub();
};
#endif
