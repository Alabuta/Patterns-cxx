#pragma once
#include <memory>

#include "IContext.h"
#include "IState.h"

class Context final : public IContext {
public:

    Context();

    bool MoveToStateA() override;
    bool MoveToStateB() override;
    bool MoveToStateC() override;
    bool MoveToStateD() override;

private:
    std::unique_ptr<IState> currentState_;
};