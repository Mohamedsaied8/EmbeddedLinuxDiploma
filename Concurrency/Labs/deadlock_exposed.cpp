#include <iostream>
#include <mutex>

template <typename T>
class X
{
    public:
    bool operator<( T const& lhs, T const& rhs)
    {
        if ( &lhs == &rhs )
        return false;
        std::lock_guard< std::mutex > guard(lhs.m);
        std::lock_guard< std::mutex > guard(rhs.m);
        return lhs.data < rhs.data;
    }
};

int main()
{


    return 0;
}