#include <iostream>
#include "DecoratorA.h"


void DecoratorA::Operation()
{
    component_->Operation();
    std::cout << __FUNCTION__ << std::endl;
}