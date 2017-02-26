#include "Client.h"


void Client::AddTarget(std::shared_ptr<ITarget> const &target)
{
    target_ = target;
}

void Client::RequestFromTarget()
{
    if (target_.expired()) {
        target_.reset();
        return;
    }

    auto target = target_.lock();

    if (target)
        target->Request();
}