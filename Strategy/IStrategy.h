#pragma once

class IStrategy {
public:

    virtual ~IStrategy() = default;

    virtual void Execute() = 0;
};