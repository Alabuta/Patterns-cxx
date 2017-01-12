#include <iostream>
#include <array>
#include <string>

#include "Client.h"

void Client::DrawFieldAndHero()
{
    std::array<std::string, 5> field = {"\t _ _ _ _ \n", "\t|_|_|_|_|\n", "\t|_|_|_|_|\n", "\t|_|_|_|_|\n", "\t|_|_|_|_|\n"};

    field[2][4] = '@';

    for (auto const &row : field)
        std::cout << row;
}