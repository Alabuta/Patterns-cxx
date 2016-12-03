#include "Subject.h"
#include <random>


void Subject::AddObserver(std::shared_ptr<IObserver> const &observer)
{
    observers_.push_front(observer);
}

void Subject::RemoveObserver(std::shared_ptr<IObserver> const &observer)
{
    observers_.remove_if([&observer] (std::weak_ptr<IObserver> &p) {
        return observer == p.lock();
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
}