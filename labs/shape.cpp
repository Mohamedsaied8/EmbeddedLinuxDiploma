#include <iostream>

/*
* Abstract class Shape:
    getDimension
    calculateArea
    displayArea

* derive Circle

* Square

*pointer from shape to point to eatch object and use the functions by turn (Optional)

*/

class Shape{

public:
    int dimension;

     void getDimension()
     {
        std::cin >> dimension;
     }
    virtual float calculateArea()=0; //pure virtual function
    virtual void displayArea()=0;
  
};

//class Circle

//Square

int main()
{
    

    return 0;
}