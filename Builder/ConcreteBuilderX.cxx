#include "ConcreteBuilderX.h"


ConcreteBuilderX::ConcreteBuilderX() : product_(new Product())
{ }

void ConcreteBuilderX::BuildPartA()
{
    product_->AddPart("Part A : Builder X");
}

void ConcreteBuilderX::BuildPartB()
{
    product_->AddPart("Part B : Builder X");
}

std::unique_ptr<Product> ConcreteBuilderX::GetProduct()
{
    return std::move(product_);
}