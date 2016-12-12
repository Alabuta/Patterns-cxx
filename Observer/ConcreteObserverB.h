#pragma once
#include "IObserver.h"

class ConcreteObserverB final : public IObserver {
public:

    void HandleEvent(Event const &e) override;
};