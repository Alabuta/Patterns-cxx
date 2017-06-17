#include "ConcreteBuilderX.h"


ConcreteBuilderX::ConcreteBuilderX() : product_(std::move(std::make_unique<Product>()))
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