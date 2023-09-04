#include <iostream>
#include <vector>

void outputVector(const std::vector<int> &nums)
{
    std::cout << "Printing the elements of vector" << std::endl;
    for(auto element : nums)
    {
         std::cout << element << std::endl;
    }
}

void inputVector(std::vector<int> &list)
{
    std::cout << "please enter elements of vector" << std::endl;
    for(auto& element : list)
    {
         std::cin >> element;
    }
}

void inputVector(std::vector<int> &list, bool &status)
{
    std::cout << "please enter elements of vector" << std::endl;
    for(auto& element : list)
    {
         std::cin >> element;
    }
    status = true;
}

int main()
{
    std::vector<int> nums(5,0);
    std::vector<int> list(5,0);
    inputVector(nums);


    //sort vector
 

    outputVector(nums); 

    return 0;
}