#include <iostream>
using namespace std;

class Polygon { //base
    public:
    virtual void show() {
        cout<<"Its a polygon"<<endl;
    }
};

class Triangle : public Polygon {
    public:
    void show() {
        cout<<"Triangle is 3 sided polygon"<<endl;
    }
};
class Rectangle : public Polygon {
    public:
    void show() {
        cout<<"Rectangle is 4 sided polygon"<<endl;
    }
};
int main() {
  Polygon *p; //pointer to the base class

  Triangle t; //vptr will be created vptr -> vtable -> vtable[0] ..
 
  p = &t; //points to triangle object [vptr is obtained]

  p->show();//vtable is accessed to obtain address of show in the triangle object

 Rectangle r;

  p = &r;
  p->show();
  return 0;
}