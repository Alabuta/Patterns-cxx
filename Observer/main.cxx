#include <iostream>

#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include "Subject.h"
#include "IObserver.h"
#include "ConcreteObserverA.h"
#include "ConcreteObserverB.h"
#include "ConcreteObserverC.h"

void main()
{
    // Memory leak detection.
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Subject subject;

    auto observerA = std::make_shared<ConcreteObserverA>();
    auto observerB = std::make_shared<ConcreteObserverB>();
    auto observerC = std::make_shared<ConcreteObserverC>();

    subject.AddObserver(observerA);
    subject.AddObserver(observerB);
    subject.AddObserver(observerB); // Attempting to add a duplicate observer.
    subject.AddObserver(observerC);

    subject.NotifyObservers();

    observerC = nullptr; // Expired pointer to observer case.
    subject.NotifyObservers();

    subject.RemoveObserver(observerB);
    subject.NotifyObservers();

    subject.AddObserver(observerB);
    subject.NotifyObservers();

    std::cin.get();
}