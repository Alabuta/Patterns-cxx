#pragma once
#include <memory>

#include "IContext.h"

class IState : public IContext {
public:

    virtual ~IState() = default;
};