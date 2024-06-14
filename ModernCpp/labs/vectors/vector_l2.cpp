#include <iostream>
#include <vector>
#include <algorithm>

void inputVector(std::vector<int> &myVector)
{
    
   for(auto &element : myVector)
    {
        std::cin >> element;
    }
    
}

void outputVector(const std::vector<int> &data_list)
{
     // output the content of the vector 
 
     for(auto it = data_list.begin(); it != data_list.end(); ++it)
     {
        std::cout << *it << " ";
     }

}

int main()
{
    // create an empty vector of five elements
    std::vector<int> list;
    // list.reserve(5);
    // list.assign({0,0,0,0,0});
    
    std::cout << "Please enter five elements ";

    //inputVector(list);

    list.push_back(7);
    list.push_back(9);
    

    outputVector(list);

    std::cout <<  "size of the vector " << list.size() << " each element " << sizeof(int) <<std::endl;

    return 0;
}