#pragma once
#include "IBuilder.h"

class Director {
public:

    void Construct(IBuilder &builder) const;
};

