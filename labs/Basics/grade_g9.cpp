//Student grading system
//ask student for their grade
//evaluate grade : 
// if grade is less than 50 then they are failed
// if grade is greater than 50 and less than  65 then they are passed
// if grade is greater than 65 and less than 75 then they are Good
// if grade is greater than 75 and less than 85 then they are very Good
// if grade is greater than 85 to 100 then they are Excellent
//print results
// for 10 students each has 5 Subjects 

#include <iostream>

enum Grades
{
    THRESHOLD = 50,
    GOOD_GRADE = 65,
    VERY_GOOD = 75,
    EXCELLENT = 85,
    MAX = 100
};

namespace Grade
{
    std::int16_t grade{0};
    void WelcomeStudent()
    {
        std::cout << "Please enter your grade\n";
        std::cin >> grade;
    }

    void evaluate()
    {
        if(grade < THRESHOLD)
        {
            std::cout << "you're failed\n";
        }
        else if(grade >= THRESHOLD && grade < GOOD_GRADE)
        {
            std::cout << "you're passed\n";
        }
        else if(grade >= GOOD_GRADE && grade < VERY_GOOD)
        {
            std::cout << "your grade is good\n";
        }
        else if(grade >= VERY_GOOD && grade < EXCELLENT)
        {
            std::cout << "your grade is very good\n";
        }
        else if(grade >=EXCELLENT && grade <= MAX)
        {
            std::cout << "your grade is Excellent\n";
        }
        else
        {
            std::cout << "please enter a valid grade\n";
        }
    }
}

int main()
{
   
while(1)
{
    Grade::WelcomeStudent();
    Grade::evaluate();
}
    return 0;
}