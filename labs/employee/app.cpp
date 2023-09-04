#include <iostream>
#include "employee_g4.h"

class Serial
{
  public:  
                                  //initalizer list
  explicit Serial(std::uint16_t baud_rate) : mBaudRate(baud_rate)
            {
                std::cout << "Setting Baud Rate " << mBaudRate << std::endl;
            }

 private:
   std::uint16_t mBaudRate;
};

void FOO(Employee *emp)
{
    emp->display();
    emp->setId(44);
}

int main()
{
    constexpr bool HIRED = true;

    Serial serial0(9600);

    Employee emp;
    emp.setId(10);
    emp.setName("Mohamed","Fouad");
   
    Employee employeeOne(2,250,"Ibrahim Khattab", HIRED);

    FOO(&employeeOne);

    std::cout <<"employee ID: " << employeeOne.getId() << std::endl;
    std::cout <<"employee Name: " << employeeOne.getName() << std::endl;

    return 0;
}