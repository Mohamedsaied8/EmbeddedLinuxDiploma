#include <iostream>


class Student
{
    public:
    Student(std::string p_name, std::uint16_t p_id, std::uint16_t p_age) 
    :name(p_name), id(p_id), age(p_age)
    {
        std::cout << "constructor\n";
    }

    void setName(std::string local_name)
    {
        this->name = local_name;
    }
    std::string getName()
    {
        return this->name;
    }

    void displayInfo()
    {
        std::cout << "name " << name << " id " << id << " age " << age << "\n";
    }
    ~Student()
    {
        std::cout << "destructor\n";
    }
    private: 
    std::uint16_t id;
    std::uint16_t age;
    std::string name;
};

int main()
{
    Student s1("Abdelrahman", 1, 20);
    s1.setName("Mohamed");
    auto name = s1.getName();
    s1.displayInfo();
    return 0;
}