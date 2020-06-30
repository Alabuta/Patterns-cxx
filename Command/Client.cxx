#include <iostream>
#include <array>

#include <string>
using namespace std::string_literals;

#include "Client.h"


void Client::DrawFieldAndHero()
{
    auto field = std::array{"\t _ _ _ _ \n"s, "\t|_|_|_|_|\n"s, "\t|_|_|_|_|\n"s, "\t|_|_|_|_|\n"s, "\t|_|_|_|_|\n"s};

    field[2][4] = '@';

    for (auto const &row : field)
        std::cout << row;
}