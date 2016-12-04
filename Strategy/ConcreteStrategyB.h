#pragma once
#include "IStrategy.h"

class ConcreteStrategyB : public IStrategy {
public:

    void Execute() override;
};