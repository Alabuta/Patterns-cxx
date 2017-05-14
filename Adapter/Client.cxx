#include "Client.h"


void Client::AddTarget(gsl::not_null<std::shared_ptr<ITarget>> const &target)
{
    target_ = target.get();
}

void Client::RequestFromTarget()
{
    if (target_.expired()) {
        target_.reset();
        return;
    }

    if (auto target = target_.lock()/*; !target_.expired()*/)
        target->Request();
}