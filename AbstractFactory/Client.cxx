#include "IAbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

#include "Client.h"


Client::Client(std::shared_ptr<IAbstractFactory> const &factory)
{
    productA_.swap(factory->CreateProductA());
    productB_.swap(factory->CreateProductB());
}

void Client::DisplayInfo() const
{
    productA_->DisplayInfo();
    productB_->DisplayInfo();
}