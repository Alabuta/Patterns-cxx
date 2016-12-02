#include <iostream>
#include <conio.h>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

int main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    std::unique_ptr<Context> client(new Context());

    client->SetStrategy(std::make_unique<ConcreteStrategyA>());
    client->UseStrategy();

    client->SetStrategy(std::make_unique<ConcreteStrategyB>());
    client->UseStrategy();

    _getch();
    return 0;
}