
#include "calculator.h"


Calculator::Calculator(int num1_, int num2_) : num1(num1_), num2(num2_)
{
}

int Calculator::add()
{
    return num1 + num2;
}

int Calculator::sub()
{
    return num1 - num2;
}

int Calculator::mul()
{
     return num1 * num2;
}

int Calculator::div()
{
     return 0;
}

void Calculator::setNums(int n1, int n2)
{
   this->num1 = n1;
   this->num2 = n2;
}

int Calculator::getFirstNum()
{
     return 0;
}

int Calculator::getSecondNum()
{
     return 0;
}



