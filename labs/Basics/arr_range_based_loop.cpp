#include <iostream>
#include <array>
#include <alorithm>



int main()
{
    int arr[5] = {0,26,45,30,60};

    //static array 
    std::array<int, 5> cpp_array = {70,20,50,90,70};
   
    std::sort(cpp_array.begin() , cpp_array.end());

    for(int i = 0 ; i < 5 ; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    for(int i = 0 ; i<cpp_array.size(); i++ )
    {
        std::cout << cpp_array[i] << std::endl;

    }

    for(int element : cpp_array)
    {
            std::cout << element << std::endl;
    }

    return 0;
}