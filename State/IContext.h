#pragma once

class IContext {
public:

    virtual ~IContext() = default;

    virtual bool MoveToStateA() = 0;
    virtual bool MoveToStateB() = 0;
    virtual bool MoveToStateC() = 0;
    virtual bool MoveToStateD() = 0;
};