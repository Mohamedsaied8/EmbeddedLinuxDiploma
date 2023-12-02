#ifndef STACK_H
#define STACK_H

enum State
{
    UNSUCCESSFUL,
    SUCCESSFUL
};

class Stack
{
public:
  
    
    Stack(int capacity);
    
    State push(int element);
    State pop(int& element);
    State isEmpty();
    State isFull();
    
    private:
    
    int * buffer;
    int top;
    int size;
    
    
};

#endif //STACK_H
