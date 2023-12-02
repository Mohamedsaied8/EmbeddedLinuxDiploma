#pragma once

class Employee
{
    public:
    
    int getSalary();
    void setAge(int age);
    int getAge();
    void setName(std::string &name);
    void displayInfo();

    private:
    int calculateSalary();
    int salary;
    int age;
    std::string name;
};

