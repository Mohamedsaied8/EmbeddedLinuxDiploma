#include <thread>
#include <iostream>
#include <chrono>
/*
* Continous  
* Periodic
* Sparodic
*/

void LCD_Screen(std::string displayed_str, int temperature)
{
    while(1)
    {
        std::cout << displayed_str << temperature <<std::endl;
        //sleep for 1 second
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

int main()
{
    std::string display("Temperature: ");
    int temperature = 43;
    std::thread t1(LCD_Screen, display , temperature);
    t1.join();

    return 0;
}