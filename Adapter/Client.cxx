#include "Client.h"


void Client::AddTarget(gsl::not_null<std::shared_ptr<ITarget>> target)
{
    target_ = target.get();
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