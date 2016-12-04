#pragma once
#include "IComponent.h"

class ConcreteComponent final : public IComponent {
public:

    void Operation() override;
};