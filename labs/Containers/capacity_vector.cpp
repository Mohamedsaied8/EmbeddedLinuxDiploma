#include <iostream>
#include <vector>

class Person
{
    public:
    

};

class employee : public Person
{
    public:

};

void apply_operation(std::vector<Person*>& people)
{
    for(auto& person : people)
    {

    }
}
int main()
{
    employee e1;
    Person ps;
    std::vector<employee> employees;  //homogenous 
   //Error employees.push_back(ps);

    std::vector<Person*> pro_people; //heterogenous

    pro_people.push_back(&e1);
    pro_people.push_back(&ps);

    apply_operation(pro_people);

    
    std::vector<int> vect(10); 


    std::cout <<vect.size() << " " << vect.capacity() << std::endl;

    return 0;
}