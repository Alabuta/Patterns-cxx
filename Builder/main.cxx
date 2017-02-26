#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Director.h"
#include "ConcreteBuilderX.h"
#include "ConcreteBuilderY.h"


void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Director director;

    ConcreteBuilderX builderX;
    ConcreteBuilderY builderY;

    director.Construct(builderX);
    director.Construct(builderY);

    auto productX = builderX.GetProduct();
    productX->Show();

    std::cout << std::endl;

    auto productY = builderY.GetProduct();
    productY->Show();

    std::cin.get();
}