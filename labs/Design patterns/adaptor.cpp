
// testable
// maintainable
// effective

extern "C"
{
#include "functions.h"
}

#include <iostream>
#include "legacy.h"
// Desired interface (Target)
class Rectangle 
{
  public:
    virtual void draw() = 0;
};

// Adapter wrapper
class RectangleAdapter: public Rectangle, private LegacyRectangle 
{
  public:
    RectangleAdapter(int x, int y, int w, int h):
         LegacyRectangle(x, y, x + w, y + h) {
         std::cout << "RectangleAdapter(x,y,x+w,x+h)\n";
      }  
    void draw() {
        std::cout << "RectangleAdapter: draw().\n"; 
        oldDraw();
        veryOldDraw();
    }
};

int main()
{
  int x = 20, y = 50, w = 300, h = 200;
  Rectangle *r = new RectangleAdapter(x,y,w,h);
  r->draw();
  //r->oldDraw(); //Cannot be called because its privately inherited from LegacyRectangle
}
