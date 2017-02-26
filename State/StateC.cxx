#include <iostream>
#include "StateC.h"

bool StateC::MoveToStateA()
{
    std::cout << R"(It's impossible to skip state "B")" << std::endl;
    return false;
}

bool StateC::MoveToStateB()
{
    std::cout << R"(Return back to previous state "B")" << std::endl;
    return false;
}

bool StateC::MoveToStateC()
{
    std::cout << R"(Context already on state "C")" << std::endl;
    return false;
}

bool StateC::MoveToStateD()
{
    std::cout << R"(Moving from state "C" to next state "D")" << std::endl;
    return true;
}