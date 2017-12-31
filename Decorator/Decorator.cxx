#include <iostream>
#include "Decorator.h"


Decorator::Decorator(gsl::not_null<std::shared_ptr<IComponent>> component) : component_(component)
{ }