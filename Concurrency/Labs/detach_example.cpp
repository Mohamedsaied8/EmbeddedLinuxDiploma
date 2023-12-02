#include<thread>
#include <iostream>

void do_something(unsigned int i)
{    
    std::cout << "value : " << i << std::endl; 
}
struct func
{
    int& i;
    func(int& i_) : i (i_) { }
    void operator()()
    {
        for(unsigned int j=0; j < 1000000; ++j)
        {
            do_something(i); // i refers to a destroyed variable
        }
    }
};
void oops()
{
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    my_thread.detach(); // don't wait the thread to finish
} // i is destroyed, but the thread is likely still running

int main()
{
    oops();
    return 0;
}