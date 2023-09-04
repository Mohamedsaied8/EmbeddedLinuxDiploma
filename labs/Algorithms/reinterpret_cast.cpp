#include <iostream>

int main()
{
    char letter = 'a';
    int num = static_cast<int>(letter);
    int address= 0x3467;
    unsigned int *out_reg = reinterpret_cast<unsigned int *>(address);
    
    return 0;
}