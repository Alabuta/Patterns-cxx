#pragma once
#include "SystemA.h"
#include "SystemB.h"
#include "SystemC.h"

class Facade final {
public:

    void DoOneThing() const;
    void DoAnotherThing() const;

private:
    SystemA systemA_;
    SystemB systemB_;
    SystemC systemC_;
};