#include <iostream>
/*
------------
1 | 20
2 | 30
------------
*/

template<class T1, class T2>
class Pair
{
    public:
    Pair(T1 first, T2 second ) :mFirst(first), mSecond(second)
    {

    }

    T1 mFirst;
    T2 mSecond;
};

template<class T1, class T2>
Pair<T1,T2> make_pair(T1 first , T2 second)
{
    Pair<T1,T2> temp(first, second);

    return temp;
}

int main()
{
    Pair<int, std::string> table = make_pair<int, std::string>(1, "Mohamed");
    
    std::cout << "first " << table.mFirst << " second " << table.mSecond;
    return 0;
}