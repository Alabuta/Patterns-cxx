#include <iostream>
#include "DecoratorB.h"


void DecoratorB::Operation()
{
    std::cout << __FUNCTION__ << std::endl;
    component_->Operation();
}