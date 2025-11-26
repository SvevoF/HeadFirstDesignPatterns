#pragma once

#include "Duck.h"
#include <string>

void Duck::SetFlyBehavior(std::unique_ptr<FlyBehavior> newFlyBehavior)
{
    flyBehavior = std::move(newFlyBehavior);
}

void Duck::SetQuackBehavior(std::unique_ptr<QuackBehavior> newQuackBehavior)
{
    quackBehavior = std::move(newQuackBehavior);
}

void Duck::PerformFly()
{
    flyBehavior->Fly();
}

void Duck::PerformQuack()
{
    quackBehavior->Quack();
}

void Duck::Swim()
{
    printf("All ducks float, even decoys!\n");
}