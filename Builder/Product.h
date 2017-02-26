#pragma once
#include <string>
#include <list>

class Product final {
public:

    void AddPart(std::string &&part);
    void Show() const;

private:
    std::list<std::string> parts_;
};

