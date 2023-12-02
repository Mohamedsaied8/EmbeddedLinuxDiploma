
#include "calculator.h"
#include <iostream>

void Calculator::DisplayResult(int result) //definition
{
    std::cout << "result = " << result << std::endl;
}

int Calculator::add(int num1, int num2)
{
    return num1 + num2;
}

int Calculator::sub(int num1, int num2)
{
    return num1 - num2;
}

int Calculator::mul(int num1, int num2)
{
    return num1 * num2;
}
