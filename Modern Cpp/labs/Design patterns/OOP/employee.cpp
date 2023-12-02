
#include "employee.h"

Company::Employee::Employee()
{
    m_id = 0;
    m_salary = 0;
    m_name = "";
}

Company::Employee::Employee(std::string name, int id, int salary)
{
    m_name = name;
    m_id = id;
    m_salary = salary;
}

Company::Employee::~Employee()
{
    std::cout << "destructor is called for id: " << m_id <<"\n" ;
}

void Company::Employee::setName(std::string name)
{
    this->m_name = name;
}

void Company::Employee::setId(int id)
{
    this->m_id = id;
}

void Company::Employee::setSalary(int salary)
{
    this->m_salary = salary;
}
//getters
std::string Company::Employee::getName()
{
    return m_name;
}
int Company::Employee::getId()
{
    return m_id;
}
int Company::Employee::getSalary()
{
    return m_salary;
}
void Company::Employee::display()
{
    std::cout << "Employee info Name: " << this->getName()
    << " Id: " << this->getId() << " Salary: " << this->getSalary() << "\n";
}
