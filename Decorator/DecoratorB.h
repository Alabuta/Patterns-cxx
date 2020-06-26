#pragma once
#include "Decorator.h"

class DecoratorB final : public Decorator {
public:

    DecoratorB(std::shared_ptr<IComponent> component);

    void Operation() override;
};