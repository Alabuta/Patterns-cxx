#pragma once
#include "IObserver.h"

class ConcreteObserverA final : public IObserver {
public:

    void HandleEvent(Event const &e) override;
};