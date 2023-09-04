/*
* print grade of students as literals : 
* if grade 50 to 65 then student has passed
* if grade 65 to 75 then its good
* if grade 75 to 85 then its very good
* if grade from 85 to 100 then its excellent
*/

#include <iostream>

namespace Evaluation
{
    std::uint16_t grade;
    std::string evaluation("");

    void getEvaulation()
    {
        // get input from user
        std::cout << "Please enter your grade" << std::endl;
        std::cin >> Evaluation::grade;
        // evaluate grade
        if(Evaluation::grade > 50 && Evaluation::grade < 65)
        {
            Evaluation::evaluation = "Passed";
        }
        else if (Evaluation::grade >= 65 && Evaluation::grade < 75)
        {
            Evaluation::evaluation = "Good";
        }
        // print the outcome
        std::cout << "Your evaulation is " << Evaluation::evaluation << std::endl;
    }
}

int main()
{

    std::uint16_t grade;
    while(1)
    {
        Evaluation::getEvaulation();
    }
    return 0;
}