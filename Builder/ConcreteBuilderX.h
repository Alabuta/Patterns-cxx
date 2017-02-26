#pragma once
#include "IBuilder.h"

class ConcreteBuilderX final : public IBuilder {
public:

    ConcreteBuilderX();

    void BuildPartA() override;
    void BuildPartB() override;

    std::unique_ptr<Product> GetProduct() override;

private:
    std::unique_ptr<Product> product_;
};