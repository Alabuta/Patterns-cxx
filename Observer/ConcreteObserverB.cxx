#include <iostream>
#include "ConcreteObserverB.h"


void ConcreteObserverB::HandleEvent(Event const &e)
{
    std::cout << "ConcreteObserverB: " << e.value << std::endl;
}