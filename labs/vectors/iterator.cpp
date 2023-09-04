#include <iostream>
#include <vector>

//C++17
template<class T>
class myVector
{
    public:
    myVector(T args...) 
    {
        //memory allocation
    }

};

int main()
{

    myVector<int> vect{8,9,6};
    std::vector<int> container {1,2,4};
        
    char num = 9;
    auto qNum = num; 

    std::cout << sizeof(qNum) << " " << sizeof(num) << std::endl;
    
    for(auto it = container.begin(); it !=container.end() ;it++)
    {

        std::cout << *it << " " ;
    }

    return 0;
}