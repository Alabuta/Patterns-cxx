#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Facade.h"

void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Facade facade;

    facade.DoOneThing();
    facade.DoAnotherThing();

    std::cin.get();
}