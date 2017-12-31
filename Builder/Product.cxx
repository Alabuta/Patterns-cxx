#include <iostream>

#include "Product.h"



void Product::Show() const
{
    for (auto &&part : parts_)
        std::cout << part << std::endl;
}