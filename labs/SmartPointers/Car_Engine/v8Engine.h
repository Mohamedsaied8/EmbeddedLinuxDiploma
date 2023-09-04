#include "IEngine.h"

class V8Engine : public IEngine
{
    void Start() override ;
    void Stop() override ;
};
std::unique_ptr<IEngine> MakeV8Engine();