#include <future>
#include <chrono>
#include <iostream>
#include <thread>

int getAccelration()
{
    while(!(ADC_SR&(1<<UPDATE_FLAG))); //polling
    return ADC_DR;
}
void AccelerationThread()
{
    while(1)
    {
        
        auto value = getAcceleration(); //block until value is ready
       // EstablishCommunication();
        Connect();
        Send(value);
        close();
    }
}
void AccelerationThread()
{
    while(1)
    {
        
    std::future<int> future = std::async([](){
                                //....
                                 return getAccelration();
                                });       // EstablishCommunication();
        Connect();
        future.wait();
        Send(future.get());
        close();
    }
}



int getTemperature()
{
    return 25;
}

template<class T>
void display(T value)
{
    std::cout << "value is " << value << "\n";
}

int main()
{
    std::future<int> future = std::async([](){
                                //....
                                 return getTemperature();
                                });

  
    std::thread display_thread([&future](){
           
            display("welcome");
            auto status = future.wait_for(std::chrono::milliseconds(100));
            if(status == std::future_status::ready)
            {
                    auto value = future.get();
                    display(value);
            }
            //do something else ...
           
    });

    display_thread.join();
    return 0;
}