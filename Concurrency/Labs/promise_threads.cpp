#include <future>
#include <thread>
#include <iostream>


void Producer(std::promise<int>& promise)
{
    auto value{0};
    std::cin >> value;
    promise.set_value(value);
}

void Consumer(std::promise<int> &promise)
{
    std::future<int> future = promise.get_future();
    auto value = future.get();
    std::cout << "value " << value << std::endl;
}

int main()
{
    std::promise<int> promise;
    std::thread producer(Producer, std::ref(promise));
    std::thread consumer(Consumer, std::ref(promise));
    producer.join();
    consumer.join();

    return 0;
}