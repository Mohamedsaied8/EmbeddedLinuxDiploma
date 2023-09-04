#include <iostream>
#include <array>

int main(){

std::array<int, 5> data = {10,5,8,9,17};
std::uint16_t key = 0;
for(int &element : data)
{
    std::cin >> element;
}
std::cin >> key;

// worst case = O(n)  best case = O(1)
for(int i =5; i>0; i--)
{
   if(data[i] == key)
   {
        std::cout << " found the key at " << i << std::endl;
        break;
   }
}

return 0;
}