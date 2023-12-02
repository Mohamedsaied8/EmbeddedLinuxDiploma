
#include <iostream>

// static local variable 
// static global variable
// static function 
// static method (in class) : method to be used without the need of constructing an object

static int default_temperature = 25;

static int maxTemperature(int sensor_reading)
{
    static int max = 0;
    max = max > sensor_reading? max : sensor_reading;
    return max;
}

int main()
{
    int sensor_reading = 100;
    while(1)
    {
        auto max = maxTemperature(sensor_reading);
        std::cout << "max is " << max;
        sensor_reading--; 

    }

    return 0;
}