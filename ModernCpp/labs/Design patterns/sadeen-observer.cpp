#include <iostream>
#include <vector>
using namespace std;
class Subject;

class Observer {
    public:
    virtual void update(Subject&)=0;
};
class analogClock {

};
class Subject {
    vector<Observer*> observers;
    public:
    void attach(Observer *o) {
        observers.push_back(o);
    }
    void deatach(Observer *o) {
        int counter = 0;
        for(Observer * v : observers){
            if (o == v){
                observers.erase(observers.begin() + counter);
            }
            counter++;
        }
    }
    void Notify() {
        for(Observer* o : observers){
           o->update(*this);
        }
    }

};
class Timer:  public Subject {
    private:
    int hours, m, sec;
    public:
    void setTime(int hours, int m, int sec){
        this->hours = hours;
        this->m = m;
        this->sec = sec;
        Notify();
    }
};
int main() {

    return 0;
}