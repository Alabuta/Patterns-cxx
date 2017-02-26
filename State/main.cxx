#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Context.h"


void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Context context;

    context.MoveToStateC();
    context.MoveToStateA();
    context.MoveToStateB();
    context.MoveToStateD();
    context.MoveToStateC();
    context.MoveToStateA();
    context.MoveToStateD();
    context.MoveToStateA();
    context.MoveToStateC();
    context.MoveToStateB();

    std::cin.get();
}