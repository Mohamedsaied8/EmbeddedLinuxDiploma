#include <iostream>
#include "employee.h"

class Value
{
    public:
    Value(int val): mValue(val)
    {

    } 

    Value() : Value(42){}

    int getValue()
    {
        return mValue;
    }
    private:
    int mValue;
};


class Ref
{
    public:
    Ref(int & pRef) : mRef{pRef}
    {
       // mRef = pRef;
    }
    private:
    int & mRef;
};

int main()
{
    Value value;
    std::cout <<" vlaue: " << value.getValue();
    int x = 8;
    Ref reference(x);
    Employee *ptr = new Employee();
    auto salary =  ptr->getSalary();
    Employee emp1; //stack
    emp1.setAge(27);
    Employee emp2(emp1);

    std::cout << emp2.getAge() << std::endl;

    delete ptr;
    return 0;
}