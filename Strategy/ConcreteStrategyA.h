#pragma once
#include "IStrategy.h"

class ConcreteStrategyA final : public IStrategy {
public:

    void Execute() override;
};