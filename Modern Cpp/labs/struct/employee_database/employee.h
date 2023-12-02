#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
    public:
    Employee(std::string first_name, std::string last_name, std::uint16_t id, std::uint16_t salary);
    void display();
    
    private:
    std::string m_first_name;
    std::string m_last_name;
    std::uint16_t m_id;
    std::uint16_t m_salary;
};

#endif