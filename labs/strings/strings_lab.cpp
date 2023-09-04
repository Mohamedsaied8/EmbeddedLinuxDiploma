#include <iostream>
#include <string>

int main()
{
    std::string name; // Dynamically Allocated 

    std::cout << " please Enter your name\n";
    std::cin >> name;

    std::cout << "weclome " << name << std::endl;

    name += " Saied"; // name = name + " saied";

    std::cout << "Full name " << name;


    return 0;
}