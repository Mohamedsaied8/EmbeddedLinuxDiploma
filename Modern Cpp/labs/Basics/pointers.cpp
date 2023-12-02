#include <iostream>

// Ahmed : values will be swapped
// Manar : values will not be swapped
// Mohamed : values will not swapped

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{

    int n1 = 5, n2 = 3;

    int *p = &n1;

    printf(" address of n1 %x , address that pointer points to %x\n", &n1, p);

    printf(" value of n1 %d , value that pointer points to %d\n", n1, *p);
    
    printf(" address pointer  %x\n", &p);


    swap(&n1, &n2);
    std::cout << "n1 " << n1 << " n2 " << n2 << std::endl;
    return 0;
}