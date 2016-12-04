#pragma once
#include "IObserver.h"

class ConcreteObserverA : public IObserver {
public:

    void HandleEvent(Event const &e) override;
};