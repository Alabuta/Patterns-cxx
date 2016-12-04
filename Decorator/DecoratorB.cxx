#include <iostream>
#include "DecoratorB.h"


void DecoratorB::Operation()
{
    component_->Operation();
    std::cout << __FUNCTION__ << std::endl;
}