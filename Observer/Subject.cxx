#include <random>
#include <iostream>
#include <algorithm>

#include "Subject.h"


void Subject::AddObserver(std::shared_ptr<IObserver> const &observer)
{
    auto duplicate = std::find_if(observers_.begin(), observers_.end(), [&observer = observer] (auto const &p)
    {
        if (!p.expired())
            return observer == p.lock();

        return false;
    }) != observers_.cend();

    if (!duplicate)
        observers_.push_front(observer);
}

void Subject::RemoveObserver(std::shared_ptr<IObserver> const &observer)
{
    observers_.remove_if([&observer = observer] (auto const &p)
    {
        if (!p.expired())
            return observer == p.lock();

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

    for (auto const &observer : observers_)
        if (!observer.expired())
            observer.lock()->HandleEvent(e);

    std::cout << std::endl;
}