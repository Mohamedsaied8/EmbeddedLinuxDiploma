#include <iostream>

template<class T>
class SmartPtr
{
    public:
    SmartPtr()
    {
        p = new T;
    }

    ~SmartPtr()
    {
        delete p;
    }

    private:
    T *p;
};


int main()
{
    SmartPtr<int> smart; //Resource Aquisition is initialization [RAII]
    SmartPtr<float> smart2; //Resource Aquisition is initialization [RAII]

    return 0;
}