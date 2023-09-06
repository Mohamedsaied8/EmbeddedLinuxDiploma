#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 3U> list; //fixed size array
    std::array<int, 4U> nums = {8,9,70,8};
    
    auto letter = '8';
    auto step_size = 8.6;

    for(auto i = 0; i < list.size(); i++)
    {
        std::cout << list[i];
    }

    for(auto it = nums.begin(); it != nums.end(); ++it)
    {
        *it = 100;
    }

    std::sort(nums.begin(), nums.end());
    //accumalte , find ...
    list.fill(0);
   // nums.swap(list);
     
    for(int element : nums)
    {
        std::cout << element << ' ';
    }

    return 0;
}