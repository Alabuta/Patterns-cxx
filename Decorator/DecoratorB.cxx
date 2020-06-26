#include <iostream>
#include "DecoratorB.h"


DecoratorB::DecoratorB(std::shared_ptr<IComponent> component) : Decorator(component)
{ }

void DecoratorB::Operation()
{
    std::cout << __FUNCTION__ << std::endl;
    component_->Operation();
}