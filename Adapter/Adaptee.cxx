#include <iostream>
#include "Adaptee.h"


void Adaptee::SpecificRequest() const
{
    std::cout << __FUNCTION__ << std::endl;
}