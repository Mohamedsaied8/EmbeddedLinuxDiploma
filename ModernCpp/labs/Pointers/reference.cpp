#include <iostream>
extern "C"
{
#include <string.h>
}

int main()
{
    int x = 5;
    int &ref = x;
    int &r2 = ref;
    int &r3 = r2;

    printf("address x = %x\n", &x);
    printf("address ref = %x\n", &ref);
    printf("address r2 = %x\n", &r2);
    printf("address r3 = %x\n", &r3);

    int *p = NULL; 
    
    //possible without initialization
    // int &ref; //ERROR when No initialization
    //reference is an alias no extra location in memory
    //pointer is a variable that has a memory location 
    //note all ptrs types has the same size
     return 0;
}