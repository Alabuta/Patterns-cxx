#include <iostream>
#include "DecoratorA.h"


DecoratorA::DecoratorA(std::shared_ptr<IComponent> component) : Decorator{component}
{ }

void DecoratorA::Operation()
{
    std::cout << __FUNCTION__ << std::endl;
    component_->Operation();
}