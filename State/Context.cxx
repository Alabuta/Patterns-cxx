#include <functional>
#include <type_traits>

#include "Context.h"
#include "StateA.h"
#include "StateB.h"
#include "StateC.h"
#include "StateD.h"

Context::Context(std::unique_ptr<IState> &&_initialState) : currentState_(std::move(_initialState))
{ }

bool Context::MoveToStateA()
{
    return ChangeState<StateA>(&IState::MoveToStateA);
}

bool Context::MoveToStateB()
{
    return ChangeState<StateB>(&IState::MoveToStateB);
}

bool Context::MoveToStateC()
{
    return ChangeState<StateC>(&IState::MoveToStateC);
}

bool Context::MoveToStateD()
{
    return ChangeState<StateD>(&IState::MoveToStateD);
}

template<class T>
bool Context::ChangeState(std::function<bool(IState &)> method)
{
    if (!std::is_base_of_v<IState, T>) {
        return false;
    }

    auto result = method(*currentState_);

    if (result)
        currentState_ = std::make_unique<T>();

    return result;
}