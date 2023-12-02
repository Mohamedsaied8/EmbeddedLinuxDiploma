#include <iostream>
int main()
{
    for(int index=0; index < 10; index++)
    {
        if(index%2==1) // if even
        {
           std::cout << "ODD " << index << std::endl;
        }
        else 
        {
             std::cout <<"EVEN "<< index << std::endl;
        }
    }

   /* {
        int myVar =10;
        std::cout << myVar;
    }*/

    return 0;
}