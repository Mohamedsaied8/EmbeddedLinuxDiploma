#include <iostream>
#include <vector>
#include <utility>
/*
[int , string] // Karim , 1
 1 , Karim  
 2 , Fouad  
 3 , Ikhlas  
 ]   
 */         

int main()
{  
    std::vector<std::pair<std::string, int>> myVector;
    myVector.push_back(std::make_pair<std::string,int>("Fouad",1));   
    myVector.emplace_back("Karim",2);

    for(auto element : myVector)
    {
        std::cout << element.first << " ";
        std::cout << element.second << std::endl;
    }
    return 0;
}