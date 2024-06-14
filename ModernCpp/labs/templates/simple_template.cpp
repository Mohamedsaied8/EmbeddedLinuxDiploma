#include <iostream>

//calculate maximum for fundamental data types such as integer and double.

template<class T>
T max(T a, T b)
{
    return a > b? a : b;
}

template<class T1, class T2>
struct pair
{
    pair(T1 pFirst,T2 pSecond) : first(pFirst), second(pSecond)
    {

    }

    //factory method
    static pair<T1, T2> make_pairx(T1 pFirst, T2 pSecond)
    {
        return pair<T1, T2>(pFirst, pSecond);
    }

    T1 first;
    T2 second;
};



int main()
{
   
    int x = 5;
    int y = 20;

    double r = 1.8;
    double c = 8.1;

    std::cout << "integer max " << max(x, y) << "\n";
    std::cout << "floading point max " << max(r, c) << "\n";

    pair<int, std::string> mypair(1, "Mohamed");

    auto mypair_1 = pair<int, int>::make_pairx(1, 1000);
    std::cout << "first " << mypair_1.first << "\n";

    return 0;
}