#pragma once
#include <memory>
#include <gsl/gsl>

#include "IComponent.h"

class Decorator : public IComponent {
public:

    Decorator(gsl::not_null<std::shared_ptr<IComponent>> &&component);

    virtual ~Decorator() = default;

protected:
    std::shared_ptr<IComponent> component_;

private:

    Decorator() = delete;
};