#include <iostream>

template<class T>
void swap(T& first, T& second)
{
    T temp = first; //copy constructor for temp
    first  = second;// assignment operator
    second = temp;
}

template<class T>
T max(T first , T second)
{
    T temp = first > second;

    return temp;
}

class Person
{
    public:
    Person(std::string name, std::uint16_t age): mName(name), mAge(age)
    {

    }

    Person(const Person& personCopy)
    {
        this->mName = personCopy.mName;
        this->mAge = personCopy.mAge;
    }
    
    Person& operator=(Person& rhs)
    {
        this->mName = rhs.mName;
        this->mAge = rhs.mAge;
        return *this;
    }

    Person& operator>(Person& rhs)
    {
        return this->mAge > rhs.mAge? *this : rhs;
    }

    std::string getName()
    {
        return this->mName;
    }

    std::uint16_t getAge()
    {
        return this->mAge;
    }

    private:
    std::string mName;
    std::uint16_t mAge;
};

int main()
{
    int x = 9;
    int y = 0;
    Person p1("Mohamed" , 30);
    Person p2("Manar" , 21);
    
    auto max_person = max<Person>(p1, p2);
    std::cout << "max_person name: " << max_person.getName() << " age: " << max_person.getAge() 
    << std::endl; 
    swap<Person>(p1,p2);
    std::cout << "P1 name: " << p1.getName() << " P2 name: " << p2.getName() << std::endl;
    
    return 0;
}