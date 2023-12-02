#include <iostream>
#include "employee_g4.h"

int main()
{
    Employee *demp = new Employee();

    std::cout << "size of Employee " << sizeof(Employee);

    Employee emp;
    emp.setId(1);
    emp.setName("Mohamed" , "Saied");
    auto id = emp.getId();

    //std::cout << sizeof(employee) << std::endl;
    return 0;
}