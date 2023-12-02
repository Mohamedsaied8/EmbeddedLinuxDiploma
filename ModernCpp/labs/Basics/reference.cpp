#include <iostream>

void swap( int & r1 , int & r2);

int main()
{
    // alias
    int x = 8;
    int &r = x;

    printf(" adress of r %x , address of x %x\n", &r, &x);    

    int n1 = 5, n2 =3;
    swap( n1 , n2);

    std::cout << "n1 " << n1 << " n2 " << n2;
    return 0;
}

void swap( int & r1 , int & r2)
{
    int temp = r1; 
    r1 = r2;
    r2 = temp;
}