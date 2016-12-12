#include <iostream>
#include <conio.h>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

int main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    ;

    _getch();
    return 0;
}