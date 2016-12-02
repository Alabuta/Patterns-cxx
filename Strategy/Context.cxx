#include "Context.h"


Context::Context() : strategy_(nullptr)
{}

Context::~Context()
{}

void Context::SetStrategy(std::unique_ptr<IStrategy> strategy)
{
    strategy_ = std::move(strategy);
}

void Context::UseStrategy()
{
    strategy_->Execute();
}