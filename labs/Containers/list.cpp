#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> _list(10), second_list;

    _list.assign({1,2,3});
    second_list.assign(5,100);
    second_list.assign(_list.begin(),_list.end());

    for( auto element : second_list)
    {
      std::cout << element << " ";
    }


    return 0;
}