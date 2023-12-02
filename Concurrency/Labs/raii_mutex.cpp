#include <thread>
#include <mutex>
#include <iostream>

std::mutex mutex;

class Guard
{
    public:
    Guard(std::mutex &m) : mutex_(m)
    {
        mutex_.lock();
    }

    ~Guard()
    {
        mutex_.unlock();
    }


    private:
    std::mutex &mutex_;
};

void DisplayTemperature(std::string temp)
{
    Guard guard(mutex);
    std::cout << "temperature " << temp << std::endl;

}

int main()
{
    std::thread t1(DisplayTemperature, "51");
    t1.join();
    return 0;
}