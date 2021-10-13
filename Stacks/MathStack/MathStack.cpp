// Implementation file for the MathStack class
#include "MathStack.h"

/*
    Add fuction
        pops two number from the stock
        and add the two numbers and push the 
        sum back to the stack
 */
void MathStack::add()
{
    int num; sum;
    
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
    int num; diff;
    
    // pop the first two number for the stack
    pop(diff);
    pop(num);
    
    // add the numbers
    diff -= num;
    
    // push "sum" into the stack
    push(diff);
}