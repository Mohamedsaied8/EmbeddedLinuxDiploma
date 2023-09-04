#include <iostream>

char* fun()
{
    char *ptr = new char[10]; //heap
    delete ptr; 
    
    //some logic
    return ptr; // dangling pointer
}
int main()
{

   while(1)
    {
      auto *p =  fun(); //memory leak problem
    }


    return 0;
}