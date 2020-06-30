#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "ConcreteComponent.h"
#include "DecoratorA.h"
#include "DecoratorB.h"

void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    ConcreteComponent component;
    component.Operation();

    std::cout << std::endl;

    DecoratorA a{std::make_shared<ConcreteComponent>(component)};
    a.Operation();

    std::cout << std::endl;

	auto pre_b = std::make_shared<DecoratorA>(a);

    DecoratorB b{pre_b};
    b.Operation();

    std::cin.get();
}