#pragma once

class IComponent {
public:

    virtual ~IComponent() = default;

    virtual void Operation() = 0;
};