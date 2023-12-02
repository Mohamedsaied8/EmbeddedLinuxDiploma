#pragma once
#include <memory>

struct IEngine
{
    virtual void Start() = 0;
    virtual void Stop() = 0;
    virtual ~IEngine() = default;
};