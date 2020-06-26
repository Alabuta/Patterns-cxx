#pragma once

#include <memory>

#include "ITarget.h"
#include "Adaptee.h"


class Adapter final : public ITarget {
public:

    Adapter(std::shared_ptr<Adaptee> adaptee);

    void Request() const override;

private:
    std::shared_ptr<Adaptee> adaptee_;
};