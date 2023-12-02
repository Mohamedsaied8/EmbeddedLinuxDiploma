/*
Description: Mile = 1.6 Km
* Input from user : distance in miles
* Apply algorithm : output = input * 1.6
* Output : show distance in KM
*/
#include <iostream>

int main()
{
    float input = 0.0;
    std::cout << "Please Enter distance in miles" << std::endl;
    std::cin >> input;
    float output = input * 1.6;
    std::cout << "output = " << output << " in KM" <<"\nsize of float " << sizeof(float) << std::endl; 
    return 0;
}