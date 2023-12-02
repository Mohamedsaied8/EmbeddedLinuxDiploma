/*
* input : radius 
* formula: area = radius * radius * PI
* output : area of a circle
*/

#include <iostream>

int main()
{
    float radius;
    std::cout << "Please enter the radius" << std::endl;
    std::cin >> radius;
    constexpr float PI = 3.14;
    float area = radius * radius * PI;
    std::cout << "the aread of a circle is " << area << std::endl;
    return 0;
}