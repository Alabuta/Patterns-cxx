#pragma once

class AbstractProductB {
public:

    virtual ~AbstractProductB() = default;

    virtual void DisplayInfo() const = 0;
};