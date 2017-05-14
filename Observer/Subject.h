#pragma once
#include <memory>
#include <list>

#include <gsl/gsl>

#include "IObserver.h"

class Subject final {
public:

    void AddObserver(gsl::not_null<std::shared_ptr<IObserver>> const &observer);
    void RemoveObserver(gsl::not_null<std::shared_ptr<IObserver>> const &observer);

    void NotifyObservers() const;

private:
    std::list<std::weak_ptr<IObserver>> observers_;
};