#include "ConcreteBuilderY.h"


ConcreteBuilderY::ConcreteBuilderY() : product_{std::move(std::make_unique<Product>())}
{ }

void ConcreteBuilderY::BuildPartA()
{
	using namespace std::string_literals;
    product_->AddPart("Part A : Builder Y"s);
}

void ConcreteBuilderY::BuildPartB()
{
	using namespace std::string_literals;
    product_->AddPart("Part B : Builder Y"s);
}

std::unique_ptr<Product> ConcreteBuilderY::GetProduct()
{
    return std::move(product_);
}