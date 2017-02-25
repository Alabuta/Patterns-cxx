#pragma once
#include "AbstractCreator.h"

class ConcreteCreatorA final : public AbstractCreator {
protected:

    std::unique_ptr<AbstractProduct> FactoryMethod() const override;
};