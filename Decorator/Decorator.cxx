#include <iostream>
#include "Decorator.h"


Decorator::Decorator(std::shared_ptr<IComponent> component) : component_(component)
{}

void Decorator::Operation()
{
    component_->Operation();
    std::cout << __FUNCTION__ << std::endl;
}