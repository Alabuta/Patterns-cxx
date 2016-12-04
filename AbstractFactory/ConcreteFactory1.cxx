#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"


AbstractProductA *ConcreteFactory1::CreateProductA() const
{
    return new ProductA1();
}

AbstractProductB *ConcreteFactory1::CreateProductB() const
{
    return new ProductB1();
}