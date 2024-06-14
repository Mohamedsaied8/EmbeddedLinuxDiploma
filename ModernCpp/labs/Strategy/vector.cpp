#include <iostream>

struct Record
{
std::string name;
int age;
};


template<class T>
class myVector
{
    public:
    myVector(int size)
    {
       buffer = new T[size];
    }

    private:
    T* buffer;
};


int main()
{
    myVector<int> nums(10);

    return 0;
}