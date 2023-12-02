#include <iostream>

#include <array>
#include <vector>


int main()
{
    std::array<int,5> list_ints;

    std::array<int,5> nums = {8,4,5,6,2};

    std::array<int,5>::iterator it;

    std::string name = "Robotics Corner";

    std::string::iterator its;
    
    for(its = name.begin(); its != name.end(); its++)
    {
        std::cout << *its << std::endl;
    }

    for(it = nums.begin(); it != nums.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    list_ints.fill(100);
    nums.swap(list_ints);
    
    for(int element : list_ints) //range based for loop
    {
        std::cout <<"num=" <<element << std::endl;
    }

    return 0;
}