#include <random>
#include <iostream>
#include <algorithm>

#include "Subject.h"


void Subject::AddObserver(std::shared_ptr<IObserver> _observer)
{
    observers_.remove_if([] (auto &&observer)
    {
        return observer.expired();
    });

    auto duplicate = std::find_if(observers_.begin(), observers_.end(), [_observer] (auto &&p)
    {
        if (auto locked = p.lock(); locked)
            return _observer == locked;

        return false;
    }) != observers_.cend();

    if (!duplicate)
        observers_.push_front(_observer);
}

void Subject::RemoveObserver(std::shared_ptr<IObserver> _observer)
{
    observers_.remove_if([_observer] (auto &&p)
    {
        if (auto locked = p.lock(); locked)
            return _observer == locked;

        return false;
    });
}

void Subject::NotifyObservers() const
{
    // The seed.
    std::random_device rd;
    // Mersenne-Twister engine.
    std::mt19937 mt(rd());
    std::uniform_int_distribution<> value(0, 9);

    IObserver::Event const e = {
        value(mt)
    };

    for (auto observer : observers_)
        if (auto locked = observer.lock(); locked)
            locked->HandleEvent(e);

    std::cout << std::endl;
}