#include "AbstractCreator.h"

std::unique_ptr<AbstractProduct> AbstractCreator::GetProduct() const
{
    return std::move(FactoryMethod());
}