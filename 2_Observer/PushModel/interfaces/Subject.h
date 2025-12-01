#pragma once

#include <list>
#include "Observer.h"

class Subject
{
public:
    virtual ~Subject() = default;

    virtual void RegisterObserver(Observer* observer) = 0;
    
    virtual void RemoveObserver(Observer* observer) = 0;

    virtual void NotifyObservers() = 0;

private:
    std::list<Observer*> observers;
};