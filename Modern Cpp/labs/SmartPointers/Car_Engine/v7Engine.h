#include "IEngine.h"
#include <iostream>

class V7Engine : public IEngine
{
    void Start() override
    {
        std::cout << "Start V7 Engine \n";
    }
    void Stop() override 
    {
         std::cout << "Start V7 Engine \n";
    }
};