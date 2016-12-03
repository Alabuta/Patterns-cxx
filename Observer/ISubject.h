#pragma once
#include <memory>
#include <forward_list>

class IObserver;

class ISubject {
public:

    ISubject();
    virtual ~ISubject();

    void AddObserver(std::shared_ptr<IObserver> &observer);
    void RemoveObserver(std::shared_ptr<IObserver> &observer);

protected:
    std::forward_list<std::weak_ptr<IObserver>> observers_;
};