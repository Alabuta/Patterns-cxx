#include "ConcreteCreatorC.h"
#include "ConcreteProductC.h"


std::unique_ptr<AbstractProduct> ConcreteCreatorC::FactoryMethod() const
{
    return std::make_unique<ConcreteProductC>();
}