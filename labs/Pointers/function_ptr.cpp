#include <iostream>
#include <array>
#include <algorithm>

void welcome(std::string str)
{
    std::cout << str << std::endl;
}

void fun2(int var)
{
    std::cout << "var = " << var << std::endl;
}

void fun1(void (*callback)(int))
{
    int data = 10;
    callback(data);
}

// a = 100 , b = 1
int main()
{
    void (*fptr)(void (*fptr)(int)) = nullptr;
 
    fptr = fun1;
    void (*fptr_2)(int) = fun2;
    
    fptr(fun2);
    welcome("Hello");
    void (*f_ptr) (std::string) = &welcome;

    f_ptr("Welcome");
    return 0;
}