#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"


std::unique_ptr<AbstractProductA> ConcreteFactory1::CreateProductA() const
{
    return std::make_unique<ProductA1>();
}

std::unique_ptr<AbstractProductB> ConcreteFactory1::CreateProductB() const
{
    return std::make_unique<ProductB1>();
}