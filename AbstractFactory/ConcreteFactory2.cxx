#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"


AbstractProductA *ConcreteFactory2::CreateProductA() const
{
    return new ProductA2();
}

AbstractProductB *ConcreteFactory2::CreateProductB() const
{
    return new ProductB2();
}