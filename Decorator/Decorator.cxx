#include <iostream>
#include "Decorator.h"


Decorator::Decorator(std::shared_ptr<IComponent> &&component) : component_(std::move(component))
{ }