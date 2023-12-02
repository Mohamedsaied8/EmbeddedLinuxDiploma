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

          
void fun1(void (*callback)(std::string))
{
    
    callback("Welcome String");
}

// a = 100 , b = 1
int main()
{
    void (*fptr)(void (*fptr)(std::string)) = nullptr;
 
    fptr = fun1;
    void (*fptr_2)(int) = fun2;
    
    fptr(welcome);

    return 0;
}