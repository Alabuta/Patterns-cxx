#include <iostream>

#include "Product.h"


void Product::AddPart(std::string &&_part)
{
    parts_.emplace_back(std::move(_part));
}

void Product::Show() const
{
    for (auto const &part : parts_)
        std::cout << part << std::endl;
}