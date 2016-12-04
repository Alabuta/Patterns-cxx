#pragma once

class AbstractProductA {
public:

    AbstractProductA() = default;
    virtual ~AbstractProductA() {};

    virtual void DisplayInfo() const = 0;
};