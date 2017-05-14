#include "Context.h"


Context::Context() : strategy_(nullptr)
{}

void Context::SetStrategy(std::unique_ptr<IStrategy> &&_strategy)
{
    if (_strategy)
        strategy_ = std::move(_strategy);
}

void Context::UseStrategy()
{
    strategy_->Execute();
}