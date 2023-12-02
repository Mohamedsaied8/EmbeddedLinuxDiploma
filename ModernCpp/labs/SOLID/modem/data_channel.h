#include <string>
class DataChannel
{
    public:
    virtual void send(char data) = 0;
    virtual char recv() = 0;

};