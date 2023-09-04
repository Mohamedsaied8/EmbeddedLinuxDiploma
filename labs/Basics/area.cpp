/*
    Description: Program to compute area of a circle
    input : radius
    formula: radius * radius * pi
    Output: display area

*/
#include <iostream>

int main()
{

constexpr float PI = 3.14; //type safety/check on type

float radius = 0.0;
//user input
std::cout << "Please enter the circle radius" << std::endl;
std::cin >> radius;

//area of a circle
 float area = PI * (radius * radius);
std::cout << "area of the circle is " << area << std::endl;
  return 0;
}