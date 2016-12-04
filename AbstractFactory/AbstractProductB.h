#pragma once

class AbstractProductB {
public:

    AbstractProductB() = default;
    virtual ~AbstractProductB() {};

    virtual void DisplayInfo() const = 0;
};