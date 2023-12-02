#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    
    Calculator(int num1_, int num2_);
    int add();
    int sub();
    int mul();
    int div();
    
    void setNums(int n1, int n2);
    int getFirstNum();
    int getSecondNum();
    
    private:
    int num1;
    int num2;
};

#endif //CALCULATOR_H
