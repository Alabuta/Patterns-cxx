#include <iostream>
#include "DecoratorA.h"


void DecoratorA::Operation()
{
    std::cout << __FUNCTION__ << std::endl;
    component_->Operation();
}