/*
* input : distance is miles
  algorithm: distance_km = miles * 1.609
  output : distance_km
*/

#include <iostream>

int main()
{
    double input_miles = 0.0;

    constexpr double MILE_TO_KM = 1.609; // text replacement at compile time

    std::cout << "Please input distance in miles" << std::endl;

    std::cin >> input_miles;

    double distance_km = input_miles * MILE_TO_KM ;

    std::cout << "distance in kilometers "<< distance_km << std::endl;
    return 0;
}