#include <iostream>
#include <vector>
#include <algorithm>

class Observer
{
    public:
    virtual void update() = 0;
    virtual ~Observer() = default;
};

class Observable
{
    public:
    virtual void attach(Observer& o)
    {
        observers.push_back(&o);
    }
    virtual void detach(Observer &o)
    {
        observers.erase(std::remove(observers.begin(),observers.end(),&o));
    }
    void Notify()
    {
        for(auto *o : observers)
        {
            o->update();
        }
    }
    private:
    std::vector<Observer*> observers;
};
 
class Timer : public Observable
{
    public:
    void SetTime(int hour , int min, int sec)
    {
        m_hour = hour;
        m_min = min;
        m_sec = sec;
        Notify();
    }
    int getHour() { return m_hour;}
    int getMinute(){ return m_min; }
    int getSecond(){ return m_sec; }
    private:
    int m_hour;
    int m_min;
    int m_sec;
};

class DigitalClock : public Observer
{
    public:
    DigitalClock(Timer & timer) : observable(timer)
    {
        observable.attach(*this);
    }
    ~DigitalClock()
    {
        observable.detach(*this);
    }
    void Draw()
    {
        std::cout << "Digital Time " 
        << observable.getHour()
        << ":"<< observable.getMinute()
        << ":"<< observable.getSecond();
    }
    void update()
    {
        Draw();
    }

    private:
    Timer &observable;
};

class AnalogueClock : public Observer
{
    public:
    AnalogueClock(Timer &timer)
    {
        observable = timer;
       observable.attach(*this); 
    }
    ~AnalogueClock()
    {
        observable.detach(*this);
    }
    void Draw()
    {
        std::cout << "Analogue Time " 
        << observable.getHour()
        << ":"<< observable.getMinute()
        << ":"<< observable.getSecond();
    }
    void update()
    {
        Draw();
    }

    private:
    Timer &observable;
};
int main()
{
    Timer timer;
    DigitalClock digital_clock(timer);
    timer.SetTime(10,41,00);

    return 0;
}