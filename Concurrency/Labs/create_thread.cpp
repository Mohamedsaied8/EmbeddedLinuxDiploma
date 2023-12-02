#include <thread>
#include <iostream>
#include <chrono>

void thread_func()
{
    while(1)
    {
        auto n = std::thread::hardware_concurrency();
        std::cout << "number of threads supported by hardware : " << n <<  std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    }
}


int main()
{
    std::thread thread1(thread_func);

    std::thread thread2(std::move(thread1));
    thread2.join();

    return 0;
}