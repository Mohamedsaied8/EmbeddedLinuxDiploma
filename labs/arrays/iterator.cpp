#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 5> intNum = {5,9,3,7,1};
    std::array<int, 5> Zeros;
    Zeros.fill(0);
    intNum.swap(Zeros);
    auto element = intNum.at(1); // intnum[1] = 9
    std::array<int , 5>::iterator it;

    std::sort(intNum.begin(), intNum.end(),[](int a, int b){
        return a > b;
    } );
    
    bool is_empty = intNum.empty();

    for(it = intNum.begin(); it != intNum.end(); ++it )
    {
        std::cout << *it << std::endl;
    }
    return 0;
}