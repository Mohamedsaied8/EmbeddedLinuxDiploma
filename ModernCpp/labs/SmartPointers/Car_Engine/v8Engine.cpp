#include "v8Engine.h"
#include <iostream>

void V8Engine::Start()  
{
    /* start the engine */ 
    std::cout << "Start V8 Engine\n";
}
void V8Engine::Stop()  
{ 
    /* stop the engine */
    std::cout << "Stop V8 Engine\n";
}

std::unique_ptr<IEngine> MakeV8Engine()
{
    return std::make_unique<V8Engine>();
}
