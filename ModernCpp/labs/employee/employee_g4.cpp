/*
* create a class of employee which has proberties of 
    id , firstName , lastName ,salary , hiringStatus
* and behaviors of : 
* setId,getId,setSalary,getSalary,setStatus,getStatus

*/

#include "employee_g4.h"


Employee::Employee() //default constructor
    {

    }

Employee::Employee(std::uint16_t id, 
             std::uint32_t salary,
             std::string fullName,
             bool status) : mId(id),mSalary(salary),mFullName(fullName),mStatus(status)
{
    std::cout << "Employee Id" << mId  
                << "Employee salary" << mSalary
                << "Employee name" << mFullName
                << "Employee statys" << mStatus << std::endl;
}
void Employee::setId(std::uint16_t id)
{
    this->mId = id;
}

std::uint16_t Employee::getId()
{
    return this->mId;
}

void Employee::setName(std::string firstName, std::string lastName)
{
    mFullName = firstName + lastName;
}

std::string Employee::getName()
{
    return mFullName;
}

void  Employee::display() const
{
   std::cout << "Employee Id" << mId  
                << "Employee salary" << mSalary
                << "Employee name" << mFullName
                << "Employee statys" << mStatus << std::endl;
}