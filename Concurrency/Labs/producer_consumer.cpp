#include <iostream>
#include <thread>
#include <chrono>
int temperature;

void Producer()
{
    while(1)
    {
        temperature += 10;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void temperatureScreen()
{
    while(1)
    {
        auto temp = temperature;
        std::cout << "value " << temp << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
}

void welcomeScreen()
{
    while(1)
    {
        std::cout << "Welcome\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
}

int main()
{
    std::thread producer(Producer);
    std::thread consumer(temperatureScreen);
    producer.join();
    consumer.join();
    return 0;
}