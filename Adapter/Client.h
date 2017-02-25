#pragma once
#include <memory>
#include "ITarget.h"

class Client final {
public:

    void AddTarget(std::shared_ptr<ITarget> const &target);
    void RequestFromTarget() const;

private:
    std::shared_ptr<ITarget> target_;
};