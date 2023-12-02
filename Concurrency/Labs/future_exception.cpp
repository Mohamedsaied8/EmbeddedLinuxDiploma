#include <math.h>
#include<future>
#include <exception>

void asyncFun( std::promise<int> myPromise)
{
    int result;
    try
    {
    // calculate the result
    myPromise.set_value(result);
    }
    catch ( ... )
    {
    myPromise.set_exception(std::current_exception());
    }
}
// In the calling thread:
int main()
{
    std::promise<int> intPromise;
    std::future<int> intFuture = intPromise.getFuture();
    std::thread t(asyncFun, std::move(intPromise));
    // do other stuff here, while asyncFun is working
    int result = intFuture.get(); // may throw MyException
    return 0;
}