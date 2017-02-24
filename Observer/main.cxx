#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Subject.h"
#include "IObserver.h"
#include "ConcreteObserverA.h"
#include "ConcreteObserverB.h"

int main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Subject subject;

    auto observerA = std::make_shared<ConcreteObserverA>();
    auto observerB = std::make_shared<ConcreteObserverB>();

    subject.AddObserver(observerA);
    subject.AddObserver(observerB);
    subject.AddObserver(observerB);
    subject.NotifyObservers();

    subject.RemoveObserver(observerB);
    subject.NotifyObservers();

    subject.AddObserver(observerB);
    subject.NotifyObservers();

    std::cin.get();
    return 0;
}