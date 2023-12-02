/*
Description: Calculate Area of Circle
where Area = radius ^ 2 * PI
and radius is an input from user
*/
#include <iostream>

//#define PI 3.14

int main()
{
    float radius = 0.0;
    constexpr float PI = 3.14;
    std::cout << "please enter the radius " << std::endl;
    std::cin >> radius;
    float area = radius * radius * PI;
    std::cout << "area: " << area << std::endl;
    return 0;
}