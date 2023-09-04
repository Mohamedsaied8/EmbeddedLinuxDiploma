#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
int main()
{
    std::vector<int> list { 80,120,1200,15,7,6};

    std::vector<int> list1 { 80,120,1200,15};

    std::array<int,3> myArray{5,8,0};
    
    std::sort(myArray.begin(), myArray.end()); 

    std::sort(list1.begin(), list.end());

    for(auto element : myArray)
    {
        std::cout << "array element: " << element << std::endl;
    }

    for(auto element : list1)
    {
        std::cout << "vector element: " << element << std::endl;
    }
    return 0;
}