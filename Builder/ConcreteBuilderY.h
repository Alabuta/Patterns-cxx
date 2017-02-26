#pragma once
#include "IBuilder.h"

class ConcreteBuilderY final : public IBuilder {
public:

    ConcreteBuilderY();

    void BuildPartA() override;
    void BuildPartB() override;

    std::unique_ptr<Product> GetProduct() override;

private:
    std::unique_ptr<Product> product_;
};