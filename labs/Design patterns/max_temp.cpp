#include <iostream>
static int step = 10; //cannot be used with extern

int maxTemp(int temp)
{
    static int max = 0;

    max = max > temp? max : temp;
    
    return max;
}

int main()
{

    std::cout << maxTemp(20) << std::endl;
    std::cout << maxTemp(15) << std::endl; //20
    return 0;
}