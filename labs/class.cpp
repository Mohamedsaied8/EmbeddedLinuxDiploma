#include <iostream>
class student{

public:
 //Constructor          
    student(int id,int age, std::string name) :m_id(id),
                                               m_age(age),
                                               m_name(name)
    {
      std::cout << "student Id: " << m_id <<" age:" << m_age
                <<" name:" << m_name << std::endl;

    }

    void setId(int id)
    {
        this->m_id = id;
    }
    int getId()
    {
        return m_id;
    }
    void enroll(std::string course)
    {
        std::cout << "student Id: " << m_id << " enrolled in " << course << std::endl;
    }

    void withdraw(std::string course)
    {
        std::cout << "student Id: " << m_id << " enrolled in " << course << std::endl;
    }

private:
    int m_id; // 
    int m_age;
    std::string m_name;
};

int main()
{
    student firstStudent(1,20,"Fathy");
    student secondStudent(2,19,"Mohamed");
    student thirdStudent(3,23,"Mahmoud");
    
    firstStudent.setId(55);
    std::cout << firstStudent.getId() << std::endl; 
  //  firstStudent.enroll("C++");

    return 0;
}