#include <iostream>

class Value
{
    public:
    Value(int capacity) : mCapacity(capacity)
    {
        p = new int[capacity]; //heap
    }

    ~Value()
    {
        delete[] p;
    }
    
    void setValue(int fill_value)
    {
        for(int i =0; i < mCapacity ; i++)
        {
            p[i] = fill_value;
        }
    }
    private:
    int *p;
    int mCapacity;
};

void UseValue(int value_cap)
{
    Value *value = new Value(value_cap); //heap
    value->setValue(value_cap);
}

int main()
{

    for(int i = 1; i < 11; i++)
    {
        UseValue(i);
    }

    return 0;
}