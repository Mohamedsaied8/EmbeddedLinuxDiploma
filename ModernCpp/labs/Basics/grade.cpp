
//Student grading system
//ask student for their grade
//evaluate grade : 
// if grade is less than 50 then they are failed
// if grade is greater than 50 and less than  65 then they are passed
// if grade is greater than 65 and less than 75 then they are Good
// if grade is greater than 75 and less than 85 then they are very Good
// if grade is greater than 85 to 100 then they are Excellent
//print results

#include <iostream>


namespace Grade
{

    void welcomeScreen()
    {
        std::cout << "Welcome to C++ School" << std::endl;
        std::cout << "Enter your Grade\n";

    }

    void gradeEvaluation(std::uint16_t grade)
    {
         if(grade > 50 && grade <= 65 )
         {
            std::cout << " Passed\n";
         }
        //...
         else if(grade > 85 && grade <= 100)
         {
            std::cout << "Excellent\n";
         }
    }
 
}


int main()
{
    Grade::welcomeScreen();
    std::uint16_t grade=0;
    std::cin >> grade;
    Grade::gradeEvaluation(grade); 


    return 0;
}

