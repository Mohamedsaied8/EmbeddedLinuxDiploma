#include <iostream>

struct Vector
{
    Vector(int size=4)
    {
       data  = new int[size]; 
    }
    //push


    ~Vector()
    {
        delete data;
    }

    int * data;
    int top;
    int size;
};



int main()
{
    int buf[20];
    printf("address of buf %x", buf);
    int *heap_allocation = new (buf) int[20]; 
    printf("address of buf %x", heap_allocation);

    return 0;
}