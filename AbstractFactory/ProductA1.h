#pragma once
#include "AbstractProductA.h"

class ProductA1 final : public AbstractProductA {
public:

    void DisplayInfo() const override;
};