#include <iostream>
namespace Calculator
{
    std::uint16_t  first_n = 0;
    std::uint16_t  second_n = 0;

    void Input()
    {
        std::cout << "Please enter first number ";
        std::cin >> first_n;
        std::cout << "Please enter second number ";
        std::cin >> second_n;
    }

    std::uint16_t add()
    {
        return first_n + second_n;
    }

    //function overloading -> compile time polymorphism 
    double add(double n1, double n2)
    {
        return n1 + n2;
    }
    //sub
    //mul
    //remainder
    //swap using reference

}
