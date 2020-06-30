#pragma once

#include <memory>
#include <functional>

#include "IContext.h"
#include "IState.h"


class Context final : public IContext {
public:

    Context(std::unique_ptr<IState> initialState);

    bool MoveToStateA() override;
    bool MoveToStateB() override;
    bool MoveToStateC() override;
    bool MoveToStateD() override;

private:
    std::unique_ptr<IState> currentState_;

    template<class T>
    requires std::is_base_of_v<IState, T>
    bool ChangeState(std::function<bool(IState &)> method);
};