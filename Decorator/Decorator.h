#pragma once
#include <memory>
#include "IComponent.h"

class Decorator : public IComponent {
public:

    Decorator() = delete;
    Decorator(std::shared_ptr<IComponent> component);
    virtual ~Decorator();

    void Operation() override;

protected:
    std::shared_ptr<IComponent> component_;
};