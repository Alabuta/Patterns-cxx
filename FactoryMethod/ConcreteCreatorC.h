#pragma once
#include "AbstractCreator.h"

class ConcreteCreatorC final : public AbstractCreator {
protected:

    std::unique_ptr<AbstractProduct> FactoryMethod() const override;
};