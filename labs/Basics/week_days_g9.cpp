/*
Goal is to find which day of week days after ten days from the current day
*/

#include <iostream>

enum WEEK_DAYS : std::uint16_t
{
    MONDAY = 1U,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
    MAX_NUM_DAYS = 7,
};

int main()
{
    constexpr std::uint16_t TEN_DAYS = 10;

    std::uint16_t current_day = SUNDAY;
    std::string day("");
    std::uint16_t day_after_ten = (current_day + TEN_DAYS) % MAX_NUM_DAYS;

    switch(day_after_ten)
    {
        case MONDAY:
             day = "Monday";
            break;
        case TUESDAY:
            day = "Tuesday";
            break;
        case WEDNESDAY:
            day = "Wednesday";
            break;
        case THURSDAY:
            day = "Thursday";
            break;
        case FRIDAY:
            day = "Friday";
            break;   
        case SATURDAY:
            day = "Saturday";
            break;
        case SUNDAY:
            day = "Sunday";
            break;
        default:
             day = "In valid day";
             break;
    }
   
    std::cout << "the day after ten days is " << day << std::endl;
    return 0;
}