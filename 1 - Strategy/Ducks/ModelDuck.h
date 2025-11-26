#pragma once

#include "../Duck.h"
#include "../Duck.cpp"

#include "../interfaces/FlyBehavior.h"
#include "../interfaces/QuackBehavior.h"

#include "../QuackBehaviors/QuackSound.cpp"
#include "../FlyBehaviors/FlyNoWay.cpp"

class ModelDuck : public Duck
{
public:
    ModelDuck();

    ~ModelDuck() = default;

    void Display();
};