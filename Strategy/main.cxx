#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    auto client = std::make_unique<Context>();

    client->SetStrategy(std::make_unique<ConcreteStrategyA>());
    client->UseStrategy();

    client->SetStrategy(std::make_unique<ConcreteStrategyB>());
    client->UseStrategy();

    client->SetStrategy(std::make_unique<ConcreteStrategyA>());
    client->UseStrategy();

    std::cin.get();
}