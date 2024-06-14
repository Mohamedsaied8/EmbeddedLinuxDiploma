#pragma once

enum Status
{
    UNSUCCESSFUL =0,
    SUCCESSFUL
};

template<class T>
class Stack
{
    public:

    Stack(int capacity)
    {
        size = capacity;
        buffer = new T[size];
        top = -1;
    }

    static Stack<T> stack_factory(int capacity)
    {
        return Stack<T>(capacity);
    }

    bool isFull(){ return top == size;  }
    bool isEmpty(){ return top == -1;  }
    
    Status push(T element)
    {
        if(isFull())
        {
            return UNSUCCESSFUL;
        }
        buffer[++top] = element;
        return SUCCESSFUL;
    }

    Status pop(T& element)
    {
        if(isEmpty())
        {
            return UNSUCCESSFUL;
        }
        element = buffer[top--];
        return SUCCESSFUL;
    }

    private:
    int size;
    T *buffer;
    int top;
};
