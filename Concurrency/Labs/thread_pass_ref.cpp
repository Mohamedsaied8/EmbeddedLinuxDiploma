#include <thread>
#include <iostream>
#include <chrono>

void f( int i, const std::string& s)
{
std::cout << s << " concurrent world" << std::endl;
}

int main()
{
int i = 3;
std::string s("Hello");
// Will copy both i and s
// We can prevent the copy by using reference wrapper
// std::thread t( f, std::ref(i), std::ref(s));
std::thread t( f, i, std::ref(s));
// if the thread destructor runs and the thread is joinable, than
// std::system_error will be thrown.
// Use join() or detach() to avoid that.
t.join();
return 0;
}