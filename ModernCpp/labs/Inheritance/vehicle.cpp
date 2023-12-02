#include <iostream>
#include <vector>

/*

Access      Same Class        Child       Outside

Public        true            true         true

Protected     true             true         False

Private        true            False        False

*/

class Control
{
    public:
    Control()
    {

    }

   virtual void manualControl()
    {

    }
    void autoControl()
    {

    }
};

class MotorCycle : public Control
{
    public:
    MotorCycle()
    {
        manualControl();
    }
 
};

class Vehicle
{

    public:
    Vehicle()
    {

    }

    void run()
    {
        std::cout << "Run" << std::endl;
    }

    virtual void run(int speed)
    {
        std::cout << "Run" << speed << std::endl;
    }

    void stop()
    {
        x =0;
        std::cout << "Stop" << std::endl;

    }

    private:
    int x;
};


//multiple inheritance
class Car : public Vehicle, public Control
{
    public:
    Car()
    {
        stop();
        autoControl();
    }
};

class Bike : public Vehicle
{
    public:
    Bike()
    {
        stop();
    }

    virtual void run(int speed)
    {
        std::cout << " Bike runs\n";
    }
    void accelerate()
    {

    }
    
};
class MotorBike : public Bike
{
    public:

    void run(int speed) override
    {
        std::cout << "Motor Bike runs\n";
    }

};

void detectVehicle(const std::vector<Vehicle*> &vehicles)
{
    //do something
}

int main()
{
    Vehicle * v = new Bike();
    v->run(25);
    Bike * bi = dynamic_cast<Bike*>(v);
    bi->accelerate(); 
    bi->run();
    Bike bike;
    bike.run();
    bike.run(20);
    Car *car;
    std::vector<Vehicle*> vehicles;
    vehicles.push_back(v);
    vehicles.push_back(car);

    return 0;
}