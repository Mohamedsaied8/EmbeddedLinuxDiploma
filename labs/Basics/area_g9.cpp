/*
calculate area of a circle
given the input from user : radius
apply algorithm : area = radius * radius * PI
output is area
*/
#include <iostream>

int main()
{
    std::uint16_t radius = 0 ;
    constexpr double PI = 3.14;
    std::cout << "Please enter the Circle Radius\n";
    std::cin >> radius; 
    double area = radius * radius * PI;
    std::cout << "area of a circle = " << area << std::endl;
    return 0;
}