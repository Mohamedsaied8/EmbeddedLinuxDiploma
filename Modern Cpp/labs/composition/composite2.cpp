// super clas s:Graphics :sub classes Line , Rectangle , Text and Picture 
//where Picture is the Compisite contains a vector of Graphics
//Picture overrides draw and add methods


#include <vector>
#include <iostream> 
#include <algorithm> 
#include <functional>  //mem_func

using namespace std;

class Graphic {
public:
  virtual void draw() const = 0; //pure virtual function
  virtual void remove(Graphic *g) {}
  virtual void add(Graphic *g) {}
  virtual void getChild(int) {}
  virtual ~Graphic() {} //virtual destructor
};

class Line : public Graphic {
public:
  void draw() const
  {
    cout << "Line draw()\n";
  }
};

class Rectangle : public Graphic {
public:
  void draw() const {
    cout << "Rectangle draw() \n";
  }
};

class Text : public Graphic {
public:
  void draw() const {
    cout << "Text draw() \n";
  }
};

// Composite
class Picture : public Graphic {
public:
  void draw() const {
    // for each element in gList, call the draw member function
   for_each(gList.begin(), gList.end(), mem_fun(&Graphic::draw)); 
  }

  void remove(Graphic *g) 
  {
    gList.erase(std::remove(gList.begin(), gList.end(), g));
  }

  void add(Graphic *aGraphic) {
    gList.push_back(aGraphic); 
  }
 
private:
  vector<Graphic*> gList;  //aggregation
};
 
int main()
{
  Line line;
  Rectangle rect;
  Text text;

/*
  line.draw();
  rect.draw();
  text.draw();
*/
  Picture pic;
  pic.add(&line); 
  pic.add(&rect);
  pic.add(&text);
  pic.add(&rect);
  pic.draw();

  return 0;
}