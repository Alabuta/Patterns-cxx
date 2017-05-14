#pragma once
#include "Decorator.h"

class DecoratorA final : public Decorator {
public:

    DecoratorA(gsl::not_null<std::shared_ptr<IComponent>> &&component);

    void Operation() override;
};