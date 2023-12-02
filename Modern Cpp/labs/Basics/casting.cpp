#include <iostream>


int main()
{
    int num = 20;
    float bigFloat = num; //No Error : implicit casting
   
   double x = 1.2;
    // Explicit conversion from double to int
    int sum = (int)x; //C-Style

    sum = static_cast<int>(x+1);

    std::cout << "Sum = " << sum;

    return 0;
}