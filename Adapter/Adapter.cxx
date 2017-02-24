#include <iostream>
#include "Adapter.h"


Adapter::Adapter(std::unique_ptr<Adaptee> &&adaptee) : adaptee_(std::move(adaptee))
{ }

void Adapter::Request() const
{
    std::cout << __FUNCTION__ << std::endl;
    adaptee_->SpecificRequest();
}