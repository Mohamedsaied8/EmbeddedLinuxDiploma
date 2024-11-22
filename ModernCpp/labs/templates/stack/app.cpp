#include <iostream>
#include "stack.h"

class Person
{
    public:
    Person(){}
};

int main()
{
    Stack<int> stack(5);
    stack.push(7);
    Stack<float> stackf(10);

    Stack<Person> stperson(6);

    Stack<int> list = Stack<int>::stack_factory(8);

    return 0;
}