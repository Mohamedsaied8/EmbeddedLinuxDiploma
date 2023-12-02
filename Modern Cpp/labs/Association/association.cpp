#include <iostream>

class Number
{
    public:
    
    Number(int n = 0) : mN(n) 
    {
    }

    int getN()
    {
        return mN;
    }
    private:
    int mN;
};

class Page
{
    public:
    Page(Number pn) : n(pn)
    {
        std::cout << "page number is" << n.getN() << "\n";
    }
    private:
    Number &n;
};

class Book
{
    public:
    Book(Number pn ,Page& page) : n(pn), mPage(page)
    {
        std::cout << "book number " << n.getN() << "\n";
    }
    private:
    Page& mPage; ///weak containment = aggregation
    Number &n;
};

class Engine
{
    public: 
    Engine()
    {
        std::cout << "Engine 115 horse power\n";
    }

    void OnVehicle()
    {
        std::cout << "ON\n";
    }
};
class BMW
{
    public:
    BMW();
};
class Vehicle
{
    public:
    Vehicle()
    {
        engine = new Engine();
    }
    friend BMW;
    private:
    Engine *engine;
};

BMW::BMW()
{
   Vehicle vehicle;
   vehicle.engine->OnVehicle();
}

int main()
{
    Number n(8); //paramterized constructor

    Page page(n);
    Book book(n, page);
    
    auto number = n.getN();
    return 0;
}