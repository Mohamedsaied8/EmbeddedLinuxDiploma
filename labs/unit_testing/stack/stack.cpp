
#include "stack.h"

Stack::Stack(int capacity) : size(capacity)
{
    buffer = new int[size];
    top = 0;
}

State Stack::push(int element)
{
    if(isFull())
    {
        return UNSUCCESSFUL;
    }
    buffer[top++] = element;
    return SUCCESSFUL;
}
       

State Stack::pop(int &element)
{
    (void) element;
     return UNSUCCESSFUL;
}

State Stack::isEmpty()
{
    if(top == 0)
    {
        return SUCCESSFUL;
    }
    return UNSUCCESSFUL;
}

State Stack::isFull()
{
    if(top == size)
    {
        return SUCCESSFUL;
    }
    return UNSUCCESSFUL;
}
        
       
