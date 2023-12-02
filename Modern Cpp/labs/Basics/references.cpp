#include <iostream>


int main()
{
    int x = 5;
    int y = 10;
    swap(x,y);
    std::cout << "value x = " << x << " value y = " << y << std::endl;

    int *p = &x;
    int **p2 = &p;
    int ***p3 = &p2;
    int ****p4 = &p3;

    p = &y;
    
    //---------------
    int &r = x;
    int &r2 = r;
    int &r3 = r2;
    int &r4 = r3;

    printf("x address = %x , ref address = %x , value =%d \n",&x,&r , r);
    printf("x address = %x , pointer address = %x",&x,&p);

    return 0;
}