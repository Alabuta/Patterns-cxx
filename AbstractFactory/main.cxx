#include <iostream>
#include <conio.h>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Client.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

int main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    ConcreteFactory1 factory1;
    Client client1(&factory1);

    client1.DisplayInfo();

    std::cout << std::endl;

    ConcreteFactory2 factory2;
    Client client2(&factory2);

    client2.DisplayInfo();

    _getch();
    return 0;
}