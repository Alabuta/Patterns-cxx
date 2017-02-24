#pragma once
#include "IAbstractFactory.h"

class ConcreteFactory2 final : public IAbstractFactory {
public:

    virtual std::unique_ptr<AbstractProductA> CreateProductA() const override;
    virtual std::unique_ptr<AbstractProductB> CreateProductB() const override;
};