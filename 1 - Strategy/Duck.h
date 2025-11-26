#pragma once

#include <memory>

#include "interfaces/QuackBehavior.h"
#include "interfaces/FlyBehavior.h"

class Duck
{
public:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;

    void SetFlyBehavior(std::unique_ptr<FlyBehavior> newFlyBehavior);

    void SetQuackBehavior(std::unique_ptr<QuackBehavior> newQuackBehavior);

    void PerformFly();

    void PerformQuack();

    void Swim();

private:
};