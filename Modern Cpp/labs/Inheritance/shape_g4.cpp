#include <iostream>

class Shape
{
    public:
        Shape()
        {

        }
   virtual void draw()
    {
        std::cout << "draw shape" << std::endl; 
    }
};

class Circle : public Shape
{
    public:
    Circle()
    {

    }
    
    void draw() override
    {
       std::cout << "draw circle" << std::endl; 
    }
    
    double area(int radius)
    {
        constexpr double PI = 3.14;
        return 2*PI*radius*radius;
    }
};

class Rectangle : public Shape
{
    public:
    void draw()
    {
        std::cout <<"draw rectangle" << std::endl;
    }
    void draw(int w,int l)
    {
        std::cout <<"draw rectangle" << std::endl;
    }
};
/*
class Elipse : public Circle
{
    public:
        void draw()
        {
            std::cout << "draw elipse";
        }
};
*/
int main()
{
    Shape *shape;
    Shape  concrete_shape;
    Rectangle rect;
    Circle circle;
    shape = &circle;
    shape->draw();
    concrete_shape.draw();
    shape = &rect;
    shape->draw();
    return 0;
}