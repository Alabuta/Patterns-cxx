#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Client.h"
#include "Adapter.h"
#include "Adaptee.h"

void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Client client;

    {
        auto target = std::make_shared<Adapter>(std::make_shared<Adaptee>());

        client.AddTarget(target);
        client.RequestFromTarget();
    }

    client.RequestFromTarget();
    client.RequestFromTarget();

    std::cin.get();
}