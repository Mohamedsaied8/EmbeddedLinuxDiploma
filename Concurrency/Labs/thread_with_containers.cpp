#include <thread>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void do_work(unsigned id){}

void run()
{
    std::vector<std::thread> threads;
    for(unsigned i=0;i<20;++i)
    {
        threads.push_back(std::thread(do_work,i));
    }
    std::for_each(threads.begin(),threads.end(),
    std::mem_fn(&std::thread::join));
}

int main()
{
    auto lambda = [](int id ) { std::cout << "id = " << id << std::endl;};

    std::vector<std::thread> threads;
    
    for(unsigned i=0;i<20;++i)
    {
     threads.push_back(std::thread([](int id ) { std::cout << "id = " << id << std::endl;} , i));
    }
    std::for_each(threads.begin(),threads.end(),
    std::mem_fn(&std::thread::join));

    //run();
    return 0;
}