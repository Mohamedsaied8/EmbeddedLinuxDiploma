#include <iostream>

template <class T>
void swap( T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

class Person
{
    public:
    Person(std::string pName, int pAge) : name(pName) , age(pAge)
    {

    }
    
    Person(const Person& person)
    {
        this->name = person.name;
        this->age = person.age;
    }

    Person& operator=(const Person& person)
    {
        this->name = person.name;
        this->age = person.age;
        return *this;
    }

    std::string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
    private:
    std::string name;
    int age;
};


int main()
{
    Person p1("Mohamed" , 31);
    Person p2("Ali" , 27);

    swap<Person>(p1,  p2);

    std::cout << "first person name " << p1.getName() << "\n"; 

    int x = 9, y = 8;

    swap<int>(x,y);
    std::cout << "value of x " << x<< "\n"; 
    return 0;
}