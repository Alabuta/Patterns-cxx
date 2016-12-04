#pragma once

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class IAbstractFactory {
public:

    IAbstractFactory() = default;
    virtual ~IAbstractFactory() = default;

    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};