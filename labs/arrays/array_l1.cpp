#include <iostream>

int main()
{
    char word[6] = {'h','e','l','l','o'};

    for(int i = 0; i < 6 ; i++)
    {
        std::cout << "element: " << word[i] << std::endl;

    }
    //read the word array
    for(char element : word)
    {
        std::cout << "element: " << element << std::endl;
    }

    //write
    for(char &element : word)
    {
        element = 'M';
    }

    for(char element : word)
    {
        std::cout << "element: " << element << std::endl;
    }
}