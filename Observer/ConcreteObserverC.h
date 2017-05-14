#pragma once
#include "IObserver.h"

class ConcreteObserverC final : public IObserver {
public:

    void HandleEvent(Event const &e) override;
};