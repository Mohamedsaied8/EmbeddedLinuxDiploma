#include <string>
class Connection
{
    public:
    virtual void Dial(std::string data) = 0;
    virtual char hangUp() = 0;

};