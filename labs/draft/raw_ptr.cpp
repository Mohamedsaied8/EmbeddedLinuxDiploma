#include <iostream>
// raw pointers problems
// 1) Memory leak : when using new without delete [crash]
// 2) dangling pointer : using a pointer that points to a delete object [undefined behavior]
// 3) double delete: [undefined behavior]
 
int* Fun()
{
    int y =8;
    int *p_local = new int; //dynamic memory allocation : in heap
    *p_local= 0x00000000;
    //delete p_local;
    return p_local; 
}

int main()
{
    int *p_global = Fun();

    while(1)
    {
    
    int *p_local = new int; //dynamic memory allocation : in heap

    delete p_local;
    delete p_local; //undefined behavior
     

    // delete p; // delete object from heap 

 
     }
  
    return 0;
}