#include "IAbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

#include "Client.h"


Client::Client(gsl::not_null<std::shared_ptr<IAbstractFactory>> const &factory)
{
    productA_ = factory->CreateProductA();
    productB_ = factory->CreateProductB();
}

void Client::DisplayInfo() const
{
    productA_->DisplayInfo();
    productB_->DisplayInfo();
}