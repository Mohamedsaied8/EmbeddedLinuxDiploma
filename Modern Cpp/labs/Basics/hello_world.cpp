#include <iostream>

void ReadSensor(double * x, double *y , double 8z);

int main()
{
    double x=0 , y=0 , z=0;
    ReadSensor(&x, &y , &z); // 89.3 , 55,1 , 66.1

    ApplyFilter(x , y ,z); // 20.2 , 15.0 , 30.5

    Localization(x, y, z);  // 20.2 , 15.0 , 30.5
    
    Display(x, y ,z); // 20.2 , 15.0 , 30.5


    return 0;
}