#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "ConcreteCreatorA.h"
#include "ConcreteCreatorB.h"
#include "ConcreteCreatorC.h"


void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    ConcreteCreatorA creatorA;

    auto productA = creatorA.GetProduct();
    productA->Info();

    ConcreteCreatorB creatorB;

    auto productB = creatorB.GetProduct();
    productB->Info();

    ConcreteCreatorC creatorC;

    auto productC = creatorC.GetProduct();
    productC->Info();

    std::cin.get();
}