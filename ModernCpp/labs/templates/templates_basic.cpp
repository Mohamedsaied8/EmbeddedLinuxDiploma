#include <iostream>
#include <vector>

template<class T>
T Max(T a , T b)
{
    return a > b ? a : b;
}

int main()
{
    std::vector<int> vect;
    
    auto max = Max<int>(3, 6);
    auto d_max = Max<double>(4.1, 8.5);
    auto c_max = Max<char>('c', 'q');
 
    std::cout << "int max " << max << " double max " <<
    d_max << " char max " << c_max<<"\n";
    return 0;
}