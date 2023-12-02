// C++ program to demonstrate static
// variables inside a class
  
#include<iostream>
using namespace std;
  
class myClass
{
   public:
   static int i;
      
     myClass()
     {
        // Do nothing
     }
};
int myClass::i = 0; 

int main()
{
  myClass obj1;
  myClass obj2;
  obj1.i = 2;
  obj2.i = 3;
    
  // prints value of i
  cout << myClass::i <<" ";   
}