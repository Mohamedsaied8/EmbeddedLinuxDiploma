/*
    * calculate : sum , division , multi~ and reminder
    * all values are numeric

*/

#include <iostream>
#include <string>

namespace Algorithm_x
{
    double factor= 10.5;
    void setValue(int n)
    {
        

    }
}
namespace Algorithm_y
{
    double factor = 0.8;

    void setValue(int n)
    {

    }
}





namespace Computing
{

    std::int32_t add(std::int32_t n1,std::int32_t n2)
    {
        std::cout <<"integer addition" << std::endl;
        return n1 + n2;
    }

    float add(float n1,float n2)
    {
        std::cout <<"floating point addition" << std::endl;
        return n1 + n2;
    }

    std::int32_t sub(std::int32_t n1,std::int32_t n2)
    {
        return n1 - n2;
    }

    std::int32_t mul(std::int32_t n1,std::int32_t n2)
    {
        return n1 * n2;
    }

}



int main()
{
    std::int32_t firstNum = 0 , secondNum = 0;
    std::int32_t result=0;
    std::uint8_t operation = 0;
    std::cout << "Please Enter first number" << std::endl;
    std::cin >> firstNum;
    std::cout << "Please Enter second number" << std::endl;
    std::cin >> secondNum;
    std::cout << "Please Enter Operating" << std::endl;
    std::cin >> operation;
    float res=0.0;
    switch(operation)
    {
        case '+':
                res = Computing::add(static_cast<float>(3.3),static_cast<float>(7.3));
                result = Computing::add(firstNum,secondNum);
                break;
        case '-':
                result = Computing::sub(firstNum,secondNum);
                break;
        case '*':
                result = Computing::mul(firstNum,secondNum);
                break;
        default:
                std::cout<< "please enter a valid operation" << std::endl;
                break;

    }
/*
    if(operation == '+')
    {
        result = Computing::add(firstNum,secondNum);
    }
    else if(operation == '-')
    {
        result = Computing::sub(firstNum,secondNum); 
    }
    else
    {
     std::cout << "please enter a valid operation" << std::endl;  
    }*/

    std::cout << "result = " << result << std::endl;  

    return 0;
}