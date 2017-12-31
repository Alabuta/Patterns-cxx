#include <iostream>
#include "DecoratorB.h"


DecoratorB::DecoratorB(gsl::not_null<std::shared_ptr<IComponent>> component) : Decorator(component)
{ }

void DecoratorB::Operation()
{
    std::cout << __FUNCTION__ << std::endl;
    component_->Operation();
}