#include "ConcreteBuilderX.h"


ConcreteBuilderX::ConcreteBuilderX() : product_(std::move(std::make_unique<Product>()))
{ }

void ConcreteBuilderX::BuildPartA()
{
	using namespace std::string_literals;
    product_->AddPart("Part A : Builder X"s);
}

void ConcreteBuilderX::BuildPartB()
{
	using namespace std::string_literals;
    product_->AddPart("Part B : Builder X"s);
}

std::unique_ptr<Product> ConcreteBuilderX::GetProduct()
{
    return std::move(product_);
}