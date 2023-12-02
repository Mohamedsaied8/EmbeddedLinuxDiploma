//stack.h
#pragma once
#include <vector>

template <typename T>
class Stack
{
public:

	Stack(int s = 10);	
    ~Stack();
	int isEmpty() const { return top == -1 ; } 
	int isFull()  const { return top == size - 1 ; } 
	int push(const T& item);
	int pop(T& popValue);
	
private:
	int size ;  // Number of elements on Stack
	int top ;  
	T* stackPtr ;  
} ;

template class Stack<int>;
template class Stack<float>;
