#include <iostream>

//employee has salary , name , age , profession


struct employee
{
    int salary;
    int age;
    std::string name;
};



int main()
{
    employee emp1 { 1000,40,"Mohamed"};

    std::cout << " size of employee "<< sizeof(emp1) << std::endl;

    return 0;
}