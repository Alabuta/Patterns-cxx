#include <iostream>
#include "ConcreteObserverA.h"


void ConcreteObserverA::HandleEvent(Event const &e)
{
    std::cout << e.value << std::endl;
}