#pragma once

class IStrategy {
public:

    virtual ~IStrategy() {};

    virtual void Execute() = 0;
};