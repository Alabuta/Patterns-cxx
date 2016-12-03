#include "ISubject.h"


ISubject::ISubject()
{}

ISubject::~ISubject()
{}

void ISubject::AddObserver(std::shared_ptr<IObserver> &observer)
{
    observers_.push_front(observer);
}

void ISubject::RemoveObserver(std::shared_ptr<IObserver> &observer)
{
    observers_.remove_if([&observer] (std::weak_ptr<IObserver> &p) {
        return observer == p.lock();
    });
}

bool operator==(const std::weak_ptr<IObserver> &a, const std::weak_ptr<IObserver> &b)
{
    return a.lock() == b.lock();
}