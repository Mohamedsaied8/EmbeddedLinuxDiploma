#include <iostream>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{   
    int n1 = 8;
    int n2 = 10;

    swap(&n1, &n2);

    std::cout  << "value of n1: " << n1 << " value of n2: " << n2; 


    return 0;
}