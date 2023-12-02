
/*

* predict the day that you will meet your friends after ten days
* week days are 7 
* there is a current day [FRIDAY]
*/
#include <iostream>

enum week
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
    MAX_WEEK_DAYS = 7
};

int main()
{

    std::uint16_t current_day = SATURDAY;

    std::uint16_t day_after_ten_days = (current_day + 10) % MAX_WEEK_DAYS;

    std::string day;

    switch(day_after_ten_days)
    {
        case MONDAY:
        {
            day = "MONDAY";
            break;
        }
            
        case TUESDAY:
        {
            day = "TUESDAY";
            break;
        }

        default:
        {
            day = "";
            std::cout << " please give a valid day" << std::endl;
            break;
        }
    }

    std::cout << "starting from Friday then the day after ten days is " 
    << day << std::endl;


    return 0;
}