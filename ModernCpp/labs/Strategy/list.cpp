#include <iostream>
#include <list>
int main()
{
    std::list<int> _list(10),_list2(10);
    _list.assign({ 1, 2, 3 });
    _list.assign(5,100);
    _list2.assign(_list.begin(), _list.end());
    _list2.emplace_back(60);
    std::cout << "The elements of list are : ";

    for (int& element : _list2)
    {
        std::cout << element << "  "  ;
    }
    
    return 0;
}