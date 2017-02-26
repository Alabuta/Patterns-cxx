#pragma once
#include <memory>
#include "Product.h"

class IBuilder {
public:

    virtual ~IBuilder() = default;

    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;

    virtual std::unique_ptr<Product> GetProduct() = 0;
};