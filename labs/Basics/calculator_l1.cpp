/*
Arithmetic operations that we want to have functions for : use namespaces

*/

#include <iostream>
#include "calculator_l1.h"


int main()
{
    Calculator::Input();
    std::cout << " addition = " << Calculator::add() << std::endl;
    
    //range based for-loop
    for(int n : {2,5,3,9})
    {
        std::cout << "Magic Number " << n << " ";
    }

    std::cout << "\naddition of 1.3 + 7.9 = " << Calculator::add(1.3, 7.9);

    return 0;
}