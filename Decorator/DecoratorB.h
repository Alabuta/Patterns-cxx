#pragma once
#include "Decorator.h"

class DecoratorB final : public Decorator {
public:

    DecoratorB() = delete;
    DecoratorB(std::shared_ptr<IComponent> component);

    void Operation() override;
};