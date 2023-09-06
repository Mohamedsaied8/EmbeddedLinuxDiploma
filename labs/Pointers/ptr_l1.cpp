#include <iostream>

void swap(int *n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    char * ch_ptr;
    int *int_ptr;
    
    int var = 5;

    int *p = &var;
    *p = 1000;
    std::cout << "var value = " << var << "\npointer value " <<
    p <<  "\naddress of var "<< &var <<std::endl;

    int **p2 = &p;
    **p2 = 700;
    
    int var2 = 900;
    swap(&var, &var2);
    std::cout << "var = " << var << " var2=" << var2 <<std::endl;

    return 0;
}