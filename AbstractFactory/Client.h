#pragma once
#include <memory>

class IAbstractFactory;
class AbstractProductA;
class AbstractProductB;

class Client final {
public:

    Client(IAbstractFactory *factory);

    void DisplayInfo() const;

private:
    std::unique_ptr<AbstractProductA> productA_;
    std::unique_ptr<AbstractProductB> productB_;
};