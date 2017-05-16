#pragma once
#include "IStrategy.h"

class ConcreteStrategyB final : public IStrategy {
public:

    void Execute() final;
};