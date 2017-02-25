#pragma once

class AbstractProduct {
public:

    virtual ~AbstractProduct() = default;

    virtual void Info() const = 0;
};