#include <iostream>

template <class T>
T max(T a,T b)
{
    return a>b? a:b; //ternary operator
}

template <class T>
void swap(T& x, T& y)
{
    T tmp = x;
    x = y;
    y= tmp;
}

int main()
{
    int n1 = 5;
    int n2 = 7;
    swap(n1,n2);
    
    std::cout << "max is " <<max(5,3) << std::endl;
    return 0;
}