#pragma once
#include "AbstractProduct.h"

class ConcreteProductB final : public AbstractProduct {
public:

    void Info() const override;
};