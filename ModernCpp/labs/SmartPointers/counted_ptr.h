#include <iostream>


template<class T>
class CountedPtr
{
    public:
    CountedPtr(T* p = nullptr) : ptr(p), count(new long(1))
    {
        
    }
    CountedPtr(const CountedPtr &copy)
    {
        ptr = copy.ptr;
        count = copy.count;
        ++(*count); 
    }
    ~CountedPtr()
    {
        --(*count);
        if(*count == 0)
        {
            delete count;
            delete ptr;
        }
    }
  
    // TODO : assignment operator
    // TODO : dereference operator 
    T& operator*()
    {
        return *ptr;
    }

    T& operator->()
    {
        return ptr;
    }

    private:
    T* ptr;
    long *count;
};

template<class T>
CountedPtr<T> Make_CountPtr()
{
    CountedPtr<T> c_ptr;
    return c_ptr;
}
