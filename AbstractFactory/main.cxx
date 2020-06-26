#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Client.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Client client1{std::make_shared<ConcreteFactory1>()};
    client1.DisplayInfo();

    std::cout << std::endl;

    Client client2{std::make_shared<ConcreteFactory2>()};
    client2.DisplayInfo();

    std::cin.get();
}