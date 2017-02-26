#include "Context.h"
#include "StateA.h"
#include "StateB.h"
#include "StateC.h"
#include "StateD.h"


Context::Context() : currentState_(std::move(std::make_unique<StateA>()))
{ }

bool Context::MoveToStateA()
{
    auto result = currentState_->MoveToStateA();

    if (result)
        currentState_.reset(new StateA);

    return result;
}

bool Context::MoveToStateB()
{
    auto result = currentState_->MoveToStateB();

    if (result)
        currentState_.reset(new StateB);

    return result;
}

bool Context::MoveToStateC()
{
    auto result = currentState_->MoveToStateC();

    if (result)
        currentState_.reset(new StateC);

    return result;
}

bool Context::MoveToStateD()
{
    auto result = currentState_->MoveToStateD();

    if (result)
        currentState_.reset(new StateD);

    return result;
}