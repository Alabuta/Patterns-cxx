#include <iostream>
#include "StateD.h"

bool StateD::MoveToStateA()
{
    std::cout << R"(It's impossible to skip states "B" and "C")" << std::endl;
    return false;
}

bool StateD::MoveToStateB()
{
    std::cout << R"(It's impossible to skip state "C")" << std::endl;
    return false;
}

bool StateD::MoveToStateC()
{
    std::cout << R"(Return back to previous state "C")" << std::endl;
    return true;
}

bool StateD::MoveToStateD()
{
    std::cout << R"(Context already on state "D")" << std::endl;
    return false;
}