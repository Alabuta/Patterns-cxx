#pragma once
#include <memory>

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class IAbstractFactory {
public:

    virtual ~IAbstractFactory() = default;

    virtual std::unique_ptr<AbstractProductA> CreateProductA() const = 0;
    virtual std::unique_ptr<AbstractProductB> CreateProductB() const = 0;
};