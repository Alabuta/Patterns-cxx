#include <iostream>
#include "StateA.h"

bool StateA::MoveToStateA()
{
    std::cout << R"(Context already on state "A")" << std::endl;
    return false;
}

bool StateA::MoveToStateB()
{
    std::cout << R"(Moving from state "A" to next state "B")" << std::endl;
    return true;
}

bool StateA::MoveToStateC()
{
    std::cout << R"(It's impossible to skip state "B")" << std::endl;
    return false;
}

bool StateA::MoveToStateD()
{
    std::cout << R"(It's impossible to skip states "B" and "C")" << std::endl;
    return false;
}