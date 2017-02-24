#include <iostream>
#include "ConcreteObserverA.h"


void ConcreteObserverA::HandleEvent(Event const &e)
{
    std::cout << "ConcreteObserverA: " << e.value << std::endl;
}