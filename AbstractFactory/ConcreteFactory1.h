#pragma once
#include "IAbstractFactory.h"

class ConcreteFactory1 final : public IAbstractFactory {
public:

    virtual AbstractProductA *CreateProductA() const override;
    virtual AbstractProductB *CreateProductB() const override;
};