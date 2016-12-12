#pragma once

class AbstractProductA {
public:

    virtual ~AbstractProductA() = default;

    virtual void DisplayInfo() const = 0;
};