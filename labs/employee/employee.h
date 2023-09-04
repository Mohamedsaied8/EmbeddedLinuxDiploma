
#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>

//class declaration
class employee
{
public:
    employee();
    employee(int argument);
   // void setName(std::string name);
  //  std::string getName();
   // void setSalary(int salary);
   // int getSalary();

private:

    int id;
    int age;
    int salary;
    std::string name;

};
#endif