#include <iostream>
#include <memory>
 
class Rectangle {
    int length;
    int breadth;
 
public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
 
    int area(){
        return length * breadth;
    }
};
 
int main(){
   
   //std::unique_ptr<Rectangle> P1(new Rectangle(10, 5));

  //std::unique_ptr<int> intPTR(new int[10]);

   auto P1 = std::make_unique<Rectangle>(10,5);
    //make_unique
    std::cout << P1->area() << std::endl; // This'll print 50
 
   // std::unique_ptr<Rectangle> P2(P1); //ERROR
    
    std::unique_ptr<Rectangle> P2(std::move(P1));
 
    // This'll print 50
    std::cout << P2->area() << std::endl;
      
    return 0;
}