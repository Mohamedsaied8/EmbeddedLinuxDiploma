
#include <iostream>

void swap(int &first, int &second)
{
    printf("Inside Swap : address of first = %x\n", &first);
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    int x = 8;
    int y = 9;
    printf("Inside Main : address of x = %x\n", &x);
    swap(x, y);
    std::cout << "swapped x with y, then x =" << x <<" and y =" << y; 
    return 0;
}