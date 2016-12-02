#pragma once
#include "memory"
#include "IStrategy.h"

class Context {
public:

    Context();
    ~Context();

    void SetStrategy(std::unique_ptr<IStrategy> strategy);
    void UseStrategy();

protected:
    std::unique_ptr<IStrategy> strategy_;
};