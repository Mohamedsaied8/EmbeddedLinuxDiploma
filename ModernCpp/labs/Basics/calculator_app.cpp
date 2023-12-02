/*
* get input from user (two integers)
* get input operation from user
* check for operation (+ - * / % )
* apply operation
* display result
*/

#include <iostream>
#include "calculator.h"

int main()
{
    int firstNum = 0; //r1
    int secondNum = 0; //r2 
    int result = 0; //r3
    char operator_; //r4
    std::cout << "please enter two integers\n";
    std::cin >> firstNum >> secondNum;
    std::cout << "please enter the desired operation\n";
    std::cin >> operator_;

    switch (operator_)
    {
    case '+':
        result = Calculator::add(firstNum, secondNum);
        break;
    case '-':
        result = Calculator::sub(firstNum, secondNum);
        break;
    case '*':
        result = Calculator::mul(firstNum, secondNum);
        break;
    default:
        std::cout << "please enter a valid operation\n";
        break;
    }

    Calculator::DisplayResult(result);

    return 0;
}


