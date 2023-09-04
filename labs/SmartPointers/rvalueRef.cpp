#include <iostream>
using namespace std;



int GetValue(){
    return 10;
}

int& GetValueRef()
{
    static int value = 10; // Data segment
    
    return value;
}

void printName(string &name) //&
{
    cout <<"Left Value Reference " << name << endl;
}

void printName(string&& name) //rvalue reference
{
    cout <<"Right Value Reference " << name<< endl; 
}


int main()
{
   // var is lvalue , 10 is rvalue means it has no location
   int i = 10; 

   i =  GetValue(); //OK

    int& var =   GetValueRef();
    // 10 = i; //you can't do that
  // GetValue() = 10;

    GetValueRef() = 5; // Works Fine! 
    std::cout << GetValueRef()  << "\n";

    string firstName = "Robotics"; //temp
    string lastName = "Corner"; //temp

    string fullName = firstName + lastName ;
 
    printName(fullName);
   
    printName(firstName + lastName); //RoboticsCorner

    return 0;
}