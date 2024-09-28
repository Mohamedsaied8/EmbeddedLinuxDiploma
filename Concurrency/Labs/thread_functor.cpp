//two threads
//first ReadTemperature: generate random number and assign it to global variable
//second LCD_Display: prints the temperature variable 
#include <iostream>
#include <thread>


class Employee
{
    public:
    Employee() = default;
    Employee(std::uint16_t id, uint16_t salary) : id_{id}, salary_{salary}
    {

    }

    void operator()()
    {
       std::cout <<"ID " << id_ << " Salary " << salary_ << std::endl;
    }

    private:
    std::uint16_t id_;
    std::uint16_t salary_;
};

int main()
{
    auto lambda = [](){
                        std::cout <<"callable\n";
                     };
   
    std::thread thread1(lambda);
    Employee mohamed(1, 1000);

    std::thread thread2(mohamed);
    thread1.join();
    thread2.join();
    return 0;
}
