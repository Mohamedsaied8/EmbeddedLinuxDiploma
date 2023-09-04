/*
* list = [ 1 , 8 ,20 , 6 , 18]
*  search for a given key from console.
________________________________________
case : best found at the first
    O(1)

case : average
    O(n)

case : worst

    O(n)

    ____________
    O(n*n) = O(n^2)

*/

#include <iostream>
#include <array>
#include <queue>
#include <stack>

template <class T>
int LinearSearch(std::array<T, 5> list, T key)
{
    for(int i=0; i < list.size(); i++)
    {
        if(key == list[i])
        {
            std::cout << "key value is found at index " << i << std::endl;
            return i;
            break;
        }
    }

    return -1;
}


int main()
{
    std::array<int, 5> list= {1 , 8 ,20 , 6 , 18 };

    std::queue<char> xqueue;
    xqueue.push('h');

    std::stack<int> xstack;
    xstack.push(8);
    xstack.size();
    
    int key = 0;
    std::cout << "please enter the key search element\n";
    std::cin >> key;

   auto result =  LinearSearch(list, key);
    if(result ==-1)
    {
        std::cout << "element is not found \n";
    }
    return 0;
}