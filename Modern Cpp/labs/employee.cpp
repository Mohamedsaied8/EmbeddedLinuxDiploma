#include <iostream>
#include "employee.h"

Employee::Employee()
{
    std::cout << "Initialized" << std::endl;
}

void Employee::displayInfo()
{
    std::cout << "Salary: " << salary << " Age: " << age <<" Name: " << name << std::endl;
}

int Employee::getAge()
{
    return this->age;
}

int Employee::calculateSalary()
{

    return this->salary + 3000;
}
int Employee::getSalary()
{

    return calculateSalary();
}
void Employee::setAge(int age)
{
    this->age = age;
}