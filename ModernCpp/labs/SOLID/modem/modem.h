
#include <string>
#include "connection.h"
#include "data_channel.h"

class ModemConnection : public Connection
{
    public:
    void Dial(std::string data) override;
    char hangUp() override;
 
};