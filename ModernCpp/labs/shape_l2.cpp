#include <iostream>

class Shape
{
    public:
    Shape(int w, int l) : width(w), height(l)
    {
        std::cout << "Shape constructor called\n";
        buffer = new int[10];
        buffer[0] = w;
        buffer[1] = l;
    }


    ~Shape()
    {
        delete [] buffer;
        std::cout << "destructor is called\n";

    }

    void print()
    {
        std::cout << "width" << width << "height" << height << " \n";
    }

    private:
    int width;
    int height;

    int *buffer;
};

//Is-A relationship
class Rectangle : public Shape
{
    public:
    Rectangle(int w, int h) 
            : Shape(w, h)
    {
        print();
    }

    Rectangle(int w) = delete;

    ~Rectangle(){}
};


int main()
{

    Rectangle rect_shape(7,7);
    rect_shape.print();

    return 0;
}