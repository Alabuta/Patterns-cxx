#include <iostream>
#include "StateB.h"

bool StateB::MoveToStateA()
{
    std::cout << R"(Return back to previous state "A")" << std::endl;
    return false;
}

bool StateB::MoveToStateB()
{
    std::cout << R"(Context already on state "B")" << std::endl;
    return false;
}

bool StateB::MoveToStateC()
{
    std::cout << R"(Moving from state "B" to next state "C")" << std::endl;
    return true;
}

bool StateB::MoveToStateD()
{
    std::cout << R"(It's impossible to skip state "C")" << std::endl;
    return false;
}