#pragma once
#include "IObserver.h"

class ConcreteObserverB : public IObserver {
public:

    void HandleEvent(Event const &e) override;
};