#include <iostream>
#include <vector>
/*
* Abstract class Shape:
    getDimension
    calculateArea
    displayArea

* derived:
* Circle
* Square

*pointer from shape to point to each object and use the functions by turn (Optional)

*/

//abstract class
class Shape{

public:
    virtual float calculateArea()=0; //pure virtual function
    virtual void displayArea()=0;   
    virtual ~Shape()=default;
};

class Square : public Shape
{
    public:
    Square(){}
    float calculateArea() override
    {
        return mHeight*mHeight;
    }
    void displayArea() override
    {
        
    } 
    private:
    int mHeight;

};
class Circle : public Shape {

    public:
    Circle(float radius) : m_radius(radius)
    {

    }

    float calculateArea() override
    {
        constexpr double PI = 3.14;
        m_area = 2* PI * m_radius * m_radius;
        return m_area;
    }

    void displayArea()
    {

    }
    private:
         float m_radius;
         float m_area;

};

class Rectangle : public Shape
{
    public:
        float calculateArea() override
        {
            
            return 0.0;
        }

        void displayArea()
        {

        } 
};
void drawShape(std::vector<Shape*> shapes)
{
    for(auto shape : shapes)
    {
        shape->calculateArea();
        shape->displayArea();
    }
    
}
typedef std::vector<Shape*> ShapeListType;
int main()
{
    Shape * shape;
    Circle circle(10.0);
    Rectangle rect;
    shape = &circle; 
    ShapeListType shapes;
    shapes.push_back(&circle);
    shapes.push_back(&rect);
    drawShape(shapes);

    return 0;
}