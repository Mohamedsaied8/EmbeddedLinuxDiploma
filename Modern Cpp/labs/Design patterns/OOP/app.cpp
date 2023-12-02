#include "employee.h"


int main()
{
    Company::Employee e1;
    e1.setSalary(1000);
    e1.setId(1);
    e1.setName("Mohamed");
    e1.display();
    Company::Employee e2("abdelrahman", 2, 1200);
    e2.display();

    return 0;
}