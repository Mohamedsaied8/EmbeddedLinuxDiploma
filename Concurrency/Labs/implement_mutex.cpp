#include <iostream>
#include <queue>

class Mutex
{
    public:
    Mutex()
    {
        //initial state
        unlock();
    }
    void lock()
    {
        queue_.pop();
    }

    void unlock()
    {
        queue_.push(lock_state);
    }
    
    private:
        std::queue<bool> queue_;
        bool lock_state{0};

        

};
Mutex m;

void Produce()
{
    m.lock();
    //do something

    m.unlock()
}

void Consume()
{
    m.lock();
    //do something

    m.unlock()
}

int main()
{

    


}