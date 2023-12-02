#include <iostream>
#include <algorithm>
using namespace std;

//ABSTRACT
class Shape{
    public:
    
  virtual void draw()=0; //pure virtual
    
};

class Circle :  public Shape{
    public:
        void draw()
        {
            cout << "draw a circle" << endl;
        }

};
class Rectangle :  public Shape{
    public:
        void draw()
        {
            cout << "draw a rect" << endl;
        }

};
int main()
{

    Circle c;
    c.draw();
    Rectangle r;

    Shape *shape;
    shape = &r;
    shape->draw();
    int &Ci;

    return 0;
}
