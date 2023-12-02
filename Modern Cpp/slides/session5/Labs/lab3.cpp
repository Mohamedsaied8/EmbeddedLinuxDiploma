#include <iostream>
#include "employee.h"


int main()
{
    Employee emp1; //stack
    
    emp1.setAge(27);
    std::cout << emp1.getSalary() << std::endl;

    return 0;
}