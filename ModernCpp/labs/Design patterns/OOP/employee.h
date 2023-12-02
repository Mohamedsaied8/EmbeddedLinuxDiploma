#include <iostream>
namespace Company
{
//class declaration
    class Employee
    {
        public:
        Employee();
        Employee(std::string name, int id, int salary);
        ~Employee();
        void setName(std::string name);
        void setId(int id);
        void setSalary(int salary);
        //getters
        int getId();
        int getSalary();
        std::string getName();
        void display();
        private:
        int m_id;
        int m_salary;
        std::string m_name;
    };
}

