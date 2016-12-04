#pragma once
#include "AbstractProductA.h"

class ProductA2 final : public AbstractProductA {
public:

    void DisplayInfo() const override;
};