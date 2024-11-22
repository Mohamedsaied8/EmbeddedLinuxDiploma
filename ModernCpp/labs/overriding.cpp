#include <iostream>

class Base
{
    public:
    virtual void display() 
    {
        std::cout << "displaying base\n";
    }
};

class Derived : public Base
{
    public:

    void display() override
    {
        std::cout << "displaying overriden\n";
    }
};

int main()
{
    Base* base; //= new Base();
    Derived derived;
    base =  &derived;

    base->display(); 
    derived.display();

    return 0;
}
