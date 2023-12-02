#include <iostream>
#include "employee.h"


Employee::Employee(std::string first_name, std::string last_name, std::uint16_t id, std::uint16_t salary)
:   m_first_name(first_name),
    m_last_name(last_name),
    m_id(id),
    m_salary(salary)
{

}

void Employee::display()
{
std::cout << "First name " << m_first_name << "\nlast name " <<m_last_name <<"\nid " << m_id << "\nsalary " << m_salary << std::endl;
}