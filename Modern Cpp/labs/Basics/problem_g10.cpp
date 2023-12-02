/*
Program Description:
* Input is distance in miles
* Algorithm formula : distance_km = input_miles * 1.609
* Output is distance in km
*/

#include <iostream>
#define KM     1.609
int main()
{
    float input_miles = 0.0;
    constexpr float MILE_TO_KM = 1.609;
    std::cout << "Please enter distance in miles\n";
    std::cin >> input_miles;
    float distance_km = input_miles * MILE_TO_KM;
    std::cout << "user input in miles: " << distance_km << "\n"; 
    return 0;
}
