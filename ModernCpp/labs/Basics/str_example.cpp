 /*
 given name from console input 
 add the second name to the input and display on console output
 example : name Robotics
           added Robotics Corner
 */
#include <iostream>

int main()
{ 
    
    std::string name("");
    std::cout << "string initial size " << name.size() << std::endl;
    const std::string addedString {" Corner"};
    std::cout<< "please enter first name\n";
    std::cin >> name;
  
    name += addedString; //name = name + addedString;
    std::cout << "full name is " <<  name << std::endl;
    std::cout << "string after adding string " << name.size() << std::endl;

    return 0;
}