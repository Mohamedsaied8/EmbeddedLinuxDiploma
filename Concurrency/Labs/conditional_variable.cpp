#include <thread>
#include <iostream>
#include <chrono>
#include <mutex>
#include <queue>
#include <condition_variable>

typedef int data_t;

std::mutex my_mutex;
std::queue< data_t > my_queue;
std::condition_variable data_cond; // conditional variable

void consume_data(data_t data)
{
    std::cout << data << std::endl;
}

data_t produce_data()
{
    static data_t var = 0; 
    var++;
    return var;
}
void producer()
{
    while ( true )
    {
        const data_t data = produce_data();
        std::lock_guard< std::mutex > prod_lock(my_mutex); // guard the push
        my_queue.push(data);
        data_cond.notify_one(); // notify the waiting thread to evaluate cond.
    }
}

void consumer()
{

while ( true )
{
    std::unique_lock< std::mutex > cons_lock(my_mutex); // not lock_guard
    
    data_cond.wait(cons_lock, // returns if lamdba returns true
    []{return !my_queue.empty();}); // else unlocks and waits

    data_t data = my_queue.front(); // lock is hold here to protect pop...

    my_queue.pop();
    cons_lock.unlock(); // ... until here
    consume_data(data);
}
}
int main()
{
    std::thread consumer_thread(consumer);
    std::thread producer_thread(producer);

    consumer_thread.join();
    producer_thread.join();
    return 0;
}