#include <iostream>

int main()
{
    int x = 3;
    int y = 9;
    int z = 10;
    auto print = [&]()->void { 
                    x*=2;
                    y*=2;
                    z*=2;
                    std::cout << "var = " << x << " var2 " << y << " var3 " << z<< std::endl;
                };

    print();

   auto print_value = [=]()->void { 
            std::cout << "var = " << x << " var2 " << y << " var3 " << z << std::endl;
         };

      auto print_only_two = [&x, &y](int factor)->void { 
                                x += factor;
                                y += factor;
                                std::cout << "var = " << x << " var2 " << y;
                            };

    print_only_two(10);
    return 0;
}