
//Modular Programming

#include <iostream>

namespace calculations
{

    std::int16_t add(std::int16_t n1, int16_t n2)
    {
        return n1 + n2;
    }
   
    std::int16_t add(std::int16_t n1, std::int16_t n2)
    {
        std::cout <<"add int" << std::endl;
        return n1+n2;
    }
    
    std::uint16_t multiply(std::uint16_t n1,std::uint16_t n2)
    {
        std::cout <<"add integers" << std::endl;
        return n1+n2;
    }

    std::int16_t sub(std::uint16_t n1,std::uint16_t n2)
    {
        return n1-n2;
    }

}


int main()
{
   // displayName();
    char op = '+';
    std::int16_t  num1=0;
    std::int16_t num2 = 0;
    std::int16_t sum = 0;
    std::cout << "Enter first number\n";
    std::cin >> num1;
    std::cout << "Enter second number\n";
    std::cin >> num2;
    std::cout << "Enter operator\n";
    std::cin >> op;
    switch(op)
    {
        case '+': 
            sum = calculations::add(num1, num2);
            std::cout << sum << std::endl;
            break;

        case '-':
            std::cout  << calculations::sub(num1,num2) << std::endl;
            break;

        default:
            std::cout << "please enter a valid operator" << std::endl;
            break;
    }
    
    return 0;
}

