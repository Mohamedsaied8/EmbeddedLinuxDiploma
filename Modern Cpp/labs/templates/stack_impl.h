//stack.h
#pragma once
#include <vector>

template <typename T>
class Stack
{
public:

	Stack(int s = 10) 
	{
		size = s > 0 && s < 1000 ? s : 10 ;  
		top = -1 ;  // initialize stack
		stackPtr = new T[size] ;
	}

	~Stack() { delete [] stackPtr ; }
	
	int isEmpty() const { return top == -1 ; } 
	int isFull()  const { return top == size - 1 ; } 

	int push(const T& item)
	{	
		if (!isFull())
		{
			stackPtr[++top] = item ;
			return 1 ;  // push successful
		}
		return 0 ;  // push unsuccessful

	}

	// pop an element off the stack
	int pop(T& popValue) 
	{
		if (!isEmpty())
		{
			popValue = stackPtr[top--] ;
			return 1 ;  // pop successful
		}
		return 0 ;  // pop unsuccessful
	}  
	
private:
	int size ;  // Number of elements on Stack
	int top ;  
	T* stackPtr ;  
};
