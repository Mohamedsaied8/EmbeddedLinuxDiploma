#include <iostream>

//parent - base
class Vehicle
{
    protected:
    int price;
    std::string name;
};

//child - derived
class FlyingVehicle : protected Vehicle
{
    public :

    int getPrice()
    {
        return price;
    }

    void setPrice(int p)
    {
        price = p;
    }
};


int main()
{

    FlyingVehicle plane;
    plane.setPrice(100);

    return 0;
}