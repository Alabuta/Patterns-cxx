#include "Client.h"


void Client::AddTarget(std::shared_ptr<ITarget> target)
{
    target_ = target;
}

void Client::RequestFromTarget()
{
    if (target_.expired()) {
        target_.reset();
        return;
    }

    if (auto target = target_.lock(); target)
        target->Request();
}