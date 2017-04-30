#include "ConcreteBuilderY.h"


ConcreteBuilderY::ConcreteBuilderY() : product_(new Product())
{ }

void ConcreteBuilderY::BuildPartA()
{
    product_->AddPart("Part A : Builder Y");
}

void ConcreteBuilderY::BuildPartB()
{
    product_->AddPart("Part B : Builder Y");
}

std::unique_ptr<Product> ConcreteBuilderY::GetProduct()
{
    return std::move(product_);
}