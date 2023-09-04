#include <iostream>
#include <array>

void InputArray(std::array<int , 3> &input)
{
    std::cout << "please enter array of size " << input.size() << std::endl;
    for(int &element : input)
    {
        std::cin >> element;
    }
   
}
void print(const std::array<int , 3> &arr)
{
    for(int element : arr)
    {
        std::cout <<"value of list elements " <<element <<std::endl;
    }
}

int main()
{
    constexpr unsigned int size = 3U;
    std::array<int , size> list{0};

   InputArray(list);
   print(list);
   
    return 0;
}