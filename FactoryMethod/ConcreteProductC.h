#pragma once
#include "AbstractProduct.h"

class ConcreteProductC final : public AbstractProduct {
public:

    void Info() const override;
};