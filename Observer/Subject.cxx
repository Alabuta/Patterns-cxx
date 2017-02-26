#include <random>
#include <iostream>
#include <algorithm>

#include "Subject.h"


void Subject::AddObserver(std::shared_ptr<IObserver> const &_observer)
{
    for (auto &observer : observers_)
        if (observer.expired())
            observer.reset();

    auto duplicate = std::find_if(observers_.begin(), observers_.end(), [&observer = _observer] (auto const &p)
    {
        auto locked = p.lock();

        if (locked)
            return observer == locked;

        return false;
    }) != observers_.cend();

    if (!duplicate)
        observers_.push_front(_observer);
}

void Subject::RemoveObserver(std::shared_ptr<IObserver> const &_observer)
{
    for (auto &observer : observers_)
        if (observer.expired())
            observer.reset();

    observers_.remove_if([&observer = _observer] (auto const &p)
    {
        auto locked = p.lock();

        if (locked)
            return observer == locked;

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

    std::shared_ptr<IObserver> temp;

    for (auto const &observer : observers_) {
        temp = observer.lock();

        if (temp)
            temp->HandleEvent(e);
    }

    std::cout << std::endl;
}