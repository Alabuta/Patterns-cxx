#include <random>
#include <iostream>
#include <algorithm>

#include "Subject.h"


void Subject::AddObserver(gsl::not_null<std::shared_ptr<IObserver>> const &_observer)
{
    observers_.remove_if([] (auto const &observer)
    {
        return observer.expired();
    });

    auto duplicate = std::find_if(observers_.begin(), observers_.end(), [&observer = _observer.get()] (auto const &p)
    {
        if (auto locked = p.lock()/*; !locked.expired()*/) // TODO: if statement with initializer isn't supported yet
            return observer == locked;

        return false;
    }) != observers_.cend();

    if (!duplicate)
        observers_.push_front(_observer.get());
}

void Subject::RemoveObserver(gsl::not_null<std::shared_ptr<IObserver>> const &_observer)
{
    observers_.remove_if([&observer = _observer.get()] (auto const &p)
    {
        if (auto locked = p.lock()/*; !locked.expired()*/)
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

    for (auto const &observer : observers_)
        if (auto locked = observer.lock()/*; !locked.expired()*/)
            locked->HandleEvent(e);

    std::cout << std::endl;
}