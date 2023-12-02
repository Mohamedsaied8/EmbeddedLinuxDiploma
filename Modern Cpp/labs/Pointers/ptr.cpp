#include <iostream>


int main()
{
    char *name = "Robotics"; // '\0'
    
    int num = 10; // 4 byte
    char letter = 'a'; //1 byte

    char *ptr = &letter;

    int *ptr2 = &num;

    double stepSize = 554.558;
    double *doublePtr = &stepSize;

    std::cout << "size of character ptr" << sizeof(ptr) << " " <<
        "size of int ptr" << sizeof(ptr2) <<" "
        <<"double pointer size " << sizeof(doublePtr) <<std::endl;

    return 0;
}