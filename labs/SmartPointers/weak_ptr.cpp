#include <iostream>
#include <memory> 

std::weak_ptr<int> weak_ptr;
void observeShared()
{
    std::cout << " use count  = " << weak_ptr.use_count() << std::endl;

    if(std::shared_ptr<int> shared_ptr = weak_ptr.lock())
    {
        std::cout << "Successful access\ndata = " << *shared_ptr << std::endl;
    }
    else
    {
         std::cout << "Unsuccessful access\n";
    }
}
int main()
{
    {
        auto sp = std::make_shared<int>(8);
        weak_ptr = sp;
        observeShared();
    }
        observeShared();


    return 0;
}