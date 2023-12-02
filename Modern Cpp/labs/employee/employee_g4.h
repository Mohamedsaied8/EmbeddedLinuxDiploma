#ifndef EMPLOYEE_G4_H
#define EMPLOYEE_G4_H
#include <iostream>

class Employee
{
public:
    Employee();
    Employee(std::uint16_t id, 
             std::uint32_t salary,
             std::string fullName,
             bool status);
    void setId(std::uint16_t id);
    std::uint16_t getId();
    void setName(std::string firstName, std::string lastName);
    std::string getName();
    void display() const;
    
private:
    std::uint16_t mId;
    std::uint32_t mSalary;
    std::string mFullName;
    bool mStatus;
};
#endif
