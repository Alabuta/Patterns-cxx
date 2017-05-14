#include <iostream>
#include "ConcreteObserverC.h"


void ConcreteObserverC::HandleEvent(Event const &e)
{
    std::cout << "ConcreteObserverC: " << e.value << std::endl;
}