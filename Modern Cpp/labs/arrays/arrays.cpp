
// list of numbers : 4 7 8 3 9
// search : 3
// structure for data -> Orgranize - > algorithm 
#include <iostream>
#include <array>

void automaticArray(const int size)
{
    int num[size]={10,5,6} ;
}

void Function(std::array<int, 5> arr)
{

}
int main(){

    const int size = 3;
    automaticArray(size);
    std::string name("Mohamed");
    for(auto letter : name)
    {
        std::cout << sizeof(letter); // 1 byte = char 
    }
    std::array<int,5> numInt{3,6,8,5,6};

    for (auto element : numInt)
    {
        std::cout << element;
    }

    int key=0;
    int expression = 10; //interview question
    bool alwaysRun = true;
    while(expression >= 0 && alwaysRun ==true )
    {

        std::cout << "Please enter a search key" <<std::endl;
        std::cin >> key ; //3

        for(int i; i<numInt.size() ; i++)
        {
            if(numInt[i] == key )
            {
                break;
            }
        }

    
        //range-based for loop
        for(int Abdelrahman : numInt)
        {
            std::cout << Abdelrahman << std::endl;
        }
        std::string name = "Robotics Corner";
        for(char c : name)
        {
            std::cout << c;
        }

        expression--;
    }//infinite-loop
    return 0;
}