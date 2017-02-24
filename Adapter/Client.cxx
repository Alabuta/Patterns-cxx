#include "Client.h"


void Client::AddTarget(std::shared_ptr<ITarget> const &target)
{
    target_ = target;
}

void Client::RequestFromTarget() const
{
    target_->Request();
}