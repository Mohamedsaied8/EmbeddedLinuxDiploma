#include <iostream>


class Vehicle
{
    public:
    Vehicle()
    {
        Stop();
    }

    void Run()
    {

    }

    void Stop()
    {

    }

};

class Car : public Vehicle
{
    public :
    Car() : Vehicle()
    {

    }
};

class DuneBuggy : public Vehicle
{
    public :
    DuneBuggy() : Vehicle()
    {
        
    }
};

class Bike : public Vehicle
{
    public :
    Bike() : Vehicle()
    {
        
    }
};

class Plane : public Vehicle
{
    public :
    Plane() : Vehicle()
    {
        
    }
};

int main()
{

    Car car;

    DuneBuggy buggy;

    Bike bike;

    Plane plan;

    return 0;
}