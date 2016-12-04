#pragma once
#include "Decorator.h"

class DecoratorA final : public Decorator {
public:

    DecoratorA() = delete;
    DecoratorA(std::shared_ptr<IComponent> component) : Decorator(std::move(component)) {};

    void Operation() override;
};