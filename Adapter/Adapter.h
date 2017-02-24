#pragma once
#include <memory>
#include "ITarget.h"
#include "Adaptee.h"

class Adapter final : public ITarget {
public:

    Adapter(std::unique_ptr<Adaptee> &&adaptee);

    void Request() const override;

private:
    std::unique_ptr<Adaptee> adaptee_;
};