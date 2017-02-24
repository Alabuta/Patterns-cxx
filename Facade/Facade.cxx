#include <iostream>
#include "Facade.h"


void Facade::DoOneThing() const
{
    std::cout << __FUNCTION__ << std::endl;

    systemA_.SpecificRoutineForSystemA();
    systemC_.SpecificRoutineForSystemC();

    std::cout << std::endl;
}

void Facade::DoAnotherThing() const
{
    std::cout << __FUNCTION__ << std::endl;

    systemB_.SpecificRoutineForSystemB();

    std::cout << std::endl;
}