#pragma once
#include <memory>
#include <gsl/gsl>

#include "ITarget.h"

class Client final {
public:

    void AddTarget(gsl::not_null<std::shared_ptr<ITarget>> target);
    void RequestFromTarget();

private:
    std::weak_ptr<ITarget> target_;
};