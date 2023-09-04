/*
Unit tarrif  :
100  1.25 per unit
200  2 per unit
300  3 per unit
*/
//#define PI 3.14 preprocessing
#include <iostream>

class ElectricityBill
{
    public:
    ElectricityBill(int consumption) : m_Consumption(consumption) //initializer list
    {
    }
    
    float calculateBill()
    {

        return m_Consumption * 1.25;
    }

private:
    int m_Consumption;
};

int main()
{
    ElectricityBill bill(20);

    constexpr float PI  = 3.14;

    float radius = 15.4;
    float area = radius * radius * PI;
    return 0;
}