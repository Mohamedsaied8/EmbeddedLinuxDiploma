/*
array iterator 
*/
#include <iostream>
#include <array>

int main()
{
    std::array<int, 3> list;

    std::array<int, 3>::iterator it;

    std::cout << "Please enter values of the array\n";
    for(auto iterator = list.begin(); iterator != list.end(); ++iterator)
    {
        std::cin >> *iterator;
    }

    for(auto iterator = list.begin(); iterator != list.end(); ++iterator)
    {
        std::cout << "list element " << *iterator << std::endl;
    }

    return 0;
}