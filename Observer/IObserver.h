#pragma once

class IObserver {
public:

    struct Event {
        int value;
    };

    virtual ~IObserver() {};

    virtual void HandleEvent(Event const &e) = 0;
};