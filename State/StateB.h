#pragma once
#include "IState.h"

class StateB final : public IState {
public:

    bool MoveToStateA() override;
    bool MoveToStateB() override;
    bool MoveToStateC() override;
    bool MoveToStateD() override;
};