#include "ConcreteCreatorA.h"
#include "ConcreteProductA.h"

std::unique_ptr<AbstractProduct> ConcreteCreatorA::FactoryMethod() const
{
    return std::make_unique<ConcreteProductA>();
}