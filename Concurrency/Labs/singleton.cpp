#include <iostream>
#include <thread>
#include <mutex>

class Singleton
{
    public:

    static Singleton* getInstance();
    void send(std::string data);

    private:
    static Singleton * instance;
    std::mutex mutex_;
};

Singleton* Singleton::instance = 0;
Singleton* Singleton::getInstance()
{
    if(instance == 0)
    {
        instance = new Singleton();
        std::cout << " new instance\n";
        return instance;
    }
    std::cout << " previous instance\n";
    return instance;
 }

void Singleton::send(std::string data)
{
    mutex_.lock();
    std::cout << "sending data " << data << std::endl;
    mutex_.unlock();
}


void FirstConsumer()
{
    Singleton * ble = Singleton::getInstance();
    while(1)
    {
        ble->send("Temperature is 43");
    }
}

void SecondConsumer()
{
    Singleton * ble = Singleton::getInstance();
    while(1)
    {
        ble->send("Streo Volume is 5");
    }
}

int main()
{
    std::thread t1(FirstConsumer);  
    std::thread t2(SecondConsumer);  

    t1.join();
    t2.join();
    
    return 0;
}