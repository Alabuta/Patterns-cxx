#include <iostream>
#include "ConcreteObserverB.h"


void ConcreteObserverB::HandleEvent(Event const &e)
{
    std::cout << e.value << std::endl;
}