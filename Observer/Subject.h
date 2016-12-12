#pragma once
#include <memory>
#include <forward_list>

#include "IObserver.h"

class Subject final {
public:

    void AddObserver(std::shared_ptr<IObserver> const &observer);
    void RemoveObserver(std::shared_ptr<IObserver> const &observer);

    void NotifyObservers() const;

private:
    std::forward_list<std::weak_ptr<IObserver>> observers_;
};