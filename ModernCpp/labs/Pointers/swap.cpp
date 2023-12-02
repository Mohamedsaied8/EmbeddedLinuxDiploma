
// x = 8 , y = 5 
//swap(x,y)
// x = 5 , y =8

#include <iostream>


void swap(int *first, int *second)
{

    printf("Swap::address of pointer first: %x\n", &first);
    printf("Swap::address of variable that first points to: %x\n", first);
    printf("Swap::Value of variable that first points to: %x\n", *first);
    int temp = *first;
    *first = *second;
    *second = temp;

}

int main()
{
    int x = 8;
    int y = 5;
    printf("main::Address of variable that first points to: %x\n", &x);
    printf("main::Value of variable that first points to: %x\n", x);
    swap(&x, &y);
    std::cout << "x:" << x <<" y:" << y << std::endl;

    return 0;
}