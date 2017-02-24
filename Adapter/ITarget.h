#pragma once

class ITarget {
public:

    virtual ~ITarget() = default;

    virtual void Request() const = 0;
};