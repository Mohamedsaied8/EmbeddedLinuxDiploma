#include <iostream>
#include <array>

void swap(int &r1, int &r2)
{
    int temp = r1;
    r1 = r2;
    r2 = temp;
}

int main()
{
    std::array<int ,3> list{1,2,3};

    int &firstElement = list[0];
    
    firstElement = 500;
    std::cout <<"first element in array list[0] " << list[0] << std::endl;
    int x = 1;
    int y = 9;
    int &r = x;

    int *p = nullptr;

    int &u = y;

    p = &x;
    r = 8;
    printf("address of x= %x , address of r= %x \n", &x, &r);

    swap(x, y);
    std::cout << "value of x " << x << " value of y " << y;

    return 0;
}