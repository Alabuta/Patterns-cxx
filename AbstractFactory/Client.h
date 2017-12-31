#pragma once
#include <memory>
#include <gsl/gsl>

class IAbstractFactory;
class AbstractProductA;
class AbstractProductB;

class Client final {
public:

    Client(gsl::not_null<std::shared_ptr<IAbstractFactory>> factory);

    void DisplayInfo() const;

private:
    std::unique_ptr<AbstractProductA> productA_;
    std::unique_ptr<AbstractProductB> productB_;
};