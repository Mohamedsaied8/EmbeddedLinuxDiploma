#include <thread>
#include <iostream>
#include <chrono>

void thread_func()
{
    while(1)
    {
        std::cout << "thread 1 is yeild" << std::endl;
        std::this_thread::yield();
        std::cout << "thread 1 is back" << std::endl;

        //std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void thread_func2()
{
    while(1)
    {
        std::cout << "thread 2 is yeild" << std::endl;
        std::this_thread::yield();
        std::cout << "thread 2 is back" << std::endl;        
    }
}

int main()
{

    std::thread thread1(thread_func);
    std::thread thread2(thread_func2);

    thread1.join();
    thread2.join();
    return 0;
}