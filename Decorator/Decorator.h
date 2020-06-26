#pragma once
#include <memory>


#include "IComponent.h"

class Decorator : public IComponent {
public:

    Decorator(std::shared_ptr<IComponent> component);

    virtual ~Decorator() = default;

protected:
    std::shared_ptr<IComponent> component_;

private:

    Decorator() = delete;
};