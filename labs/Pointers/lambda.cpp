#include <iostream>
#include <array>
#include <algorithm>
 
 bool compare(int &num1, int &num2)
 {
    return num1 > num2;
 }

 int main()
 {
    std::array<int, 5> list= {100, 1 , 2 ,50 ,17};
    std::for_each(list.begin(), list.end(), [](int &element) ->void
                                            {
                                             element *= 2; // element = element * 2;
                                            });
    for(auto element : list)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    std::sort(list.begin(), list.end(), [](int &num1,int &num2)->bool{
                                            return num1 < num2;
                                          });
    for(auto element: list)
    {
        std::cout << element << " ";
    }

    std::cout << std::endl;
    int var =10;
    std::string name("Mohamed");
    auto lambda = [&var , name]() ->void
    {
        std::cout << name << " "<< var << std::endl;
        var = 8;
    };

    lambda();
    std::cout << var << std::endl;

    return 0;
    }