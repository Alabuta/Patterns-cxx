#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"



std::unique_ptr<AbstractProductA> ConcreteFactory2::CreateProductA() const
{
    return std::make_unique<ProductA2>();
}

std::unique_ptr<AbstractProductB> ConcreteFactory2::CreateProductB() const
{
    return std::make_unique<ProductB2>();
}