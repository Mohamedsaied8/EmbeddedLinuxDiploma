#include "employee.h"
#include <vector>

void EmployeesDatabase(std::vector<Employee> &database)
{
    for(auto employee : database)
    {
        employee.display();
    }

    for(int index = 0; index < database.size(); index++)
    {
        database[index].display();
    }

    for(auto it = database.begin(); it != database.end() ; ++it)
    {
        it->display();
    }
}

int main()
{
    std::vector<Employee> database;

    Employee instructor("Mohamed", "Saied" ,1, 500); 
    Employee coordinator("Eman", "Khalil" ,2, 500); 

    database.push_back(instructor);  
    database.push_back(coordinator);   
    Employee *employee_ptr = &instructor;
    
    employee_ptr->display();

    EmployeesDatabase(database);
    return 0;
}