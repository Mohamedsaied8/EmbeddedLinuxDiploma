#include <math.h>
#include<future>
#include <exception>

double square_root(double x)
{
    if ( x < 0 )
    {
    throw std::out_of_range("x<0");
    }
    return sqrt(x);
}
int main()
{
    std::future<double> fut = std::async( square_root, -1);
    // do something else...
    double res = fut.get(); // f becomes ready on exception and rethrows
} // exception object could be a copy of original