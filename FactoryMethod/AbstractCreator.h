#pragma once
#include <memory>
#include "AbstractProduct.h"

class AbstractCreator {
public:

    virtual ~AbstractCreator() = default;
    std::unique_ptr<AbstractProduct> GetProduct() const;

protected:

    virtual std::unique_ptr<AbstractProduct> FactoryMethod() const = 0;
};