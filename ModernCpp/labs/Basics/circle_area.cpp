#include <iostream>
/*
*Description:
    calculation circle area where radius 20
    circle area = PI * (radius * radius)
*/
// Data types:
// char 8 bits = 1 byte 
// char letter = 'a';
// usigned char = 255;
// int height = 10; -32000 to +32000
// usigned int = 65535; 2^16
// float radius = 10.15; 4 bytes 
// double circle_area = 100.5;  8 bytes

int main()
{
    float radius = 0.0;
    std::cout << "Please enter radius value" << std::endl;
    std::cin >> radius;
    const float PI = 3.14;
    double circle_area = PI * radius * radius;
    std::cout << " circle area = " << circle_area << std::endl;
    
    return 0;
}