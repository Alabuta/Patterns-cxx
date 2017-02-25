#include "ConcreteCreatorB.h"
#include "ConcreteProductB.h"


std::unique_ptr<AbstractProduct> ConcreteCreatorB::FactoryMethod() const
{
    return std::make_unique<ConcreteProductB>();
}