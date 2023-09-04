#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//Abstract Class
struct IStrategy
{
    //Algorithm Interface
    virtual void calculateSpeed() = 0;
};

struct StrategyBMW : IStrategy
{
    void calculateSpeed() override
    {
       cout << "BMW Car\n";
    }

};

struct StrategyMiniCoper : IStrategy
{
    void calculateSpeed() override
    {
        cout << "Mini Coper\n";
    }

};

//Context
 struct Vehicle
{
   Vehicle(IStrategy *_strategy) : strategy(_strategy)
    {
    }

   void vehicleSpeed()
   {
     strategy->calculateSpeed();
   }
    
    //Ptr to implementation : pimpl idiom 
    IStrategy *strategy;  
};


int main()
{

   StrategyBMW bmw;
   StrategyMiniCoper mini;
 
    IStrategy * strategy = &bmw;
    strategy->calculateSpeed(); // bmw

    strategy = &mini;
    strategy->calculateSpeed(); // mini

   Vehicle  E36(&bmw);
    E36.vehicleSpeed();

   Vehicle car2(&mini);
   car2.vehicleSpeed();

  

    return 0;
}