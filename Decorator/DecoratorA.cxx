#include <iostream>
#include "DecoratorA.h"


DecoratorA::DecoratorA(gsl::not_null<std::shared_ptr<IComponent>> &&component) : Decorator(std::move(component))
{ }

void DecoratorA::Operation()
{
    std::cout << __FUNCTION__ << std::endl;
    component_->Operation();
}