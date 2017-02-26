#pragma once
#include "IState.h"

class StateA final : public IState {
public:

    bool MoveToStateA() override;
    bool MoveToStateB() override;
    bool MoveToStateC() override;
    bool MoveToStateD() override;
};