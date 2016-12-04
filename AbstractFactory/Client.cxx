#include "IAbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

#include "Client.h"


Client::Client(IAbstractFactory *factory)
{
    productA_.reset(factory->CreateProductA());
    productB_.reset(factory->CreateProductB());
}

void Client::DisplayInfo() const
{
    productA_->DisplayInfo();
    productB_->DisplayInfo();
}