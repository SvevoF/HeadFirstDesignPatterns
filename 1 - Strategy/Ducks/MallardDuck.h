#pragma once

#include "../Duck.h"
#include "../Duck.cpp"

#include "../interfaces/FlyBehavior.h"
#include "../interfaces/QuackBehavior.h"

#include "../QuackBehaviors/QuackSound.cpp"
#include "../FlyBehaviors/FlyWithWings.cpp"

class MallardDuck : public Duck 
{
public:
    MallardDuck();

    ~MallardDuck() = default;

    void Display();
};