#pragma once
#include "AbstractProduct.h"

class ConcreteProductA final : public AbstractProduct {
public:

    void Info() const override;
};