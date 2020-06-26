#pragma once
#include <memory>
#include <list>



#include "IObserver.h"

class Subject final {
public:

    void AddObserver(std::shared_ptr<IObserver> observer);
    void RemoveObserver(std::shared_ptr<IObserver> observer);

    void NotifyObservers() const;

private:
    std::list<std::weak_ptr<IObserver>> observers_;
};