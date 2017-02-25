#pragma once
#include "AbstractCreator.h"

class ConcreteCreatorB final : public AbstractCreator {
protected:

    std::unique_ptr<AbstractProduct> FactoryMethod() const override;
};