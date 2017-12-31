#pragma once
#include <memory>
#include <gsl/gsl>

#include "ITarget.h"
#include "Adaptee.h"

class Adapter final : public ITarget {
public:

    Adapter(gsl::not_null<std::shared_ptr<Adaptee>> adaptee);

    void Request() const override;

private:
    std::shared_ptr<Adaptee> adaptee_;
};