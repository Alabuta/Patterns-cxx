#include <iostream>
#include "Adapter.h"


Adapter::Adapter(std::shared_ptr<Adaptee> adaptee) : adaptee_(adaptee)
{ }

void Adapter::Request() const
{
    std::cout << __FUNCTION__ << std::endl;
    adaptee_->SpecificRequest();
}