#pragma once

#include <stdio.h>

#include "ModelDuck.h"

ModelDuck::ModelDuck()
{
    quackBehavior = std::make_unique<QuackSound>();
    flyBehavior = std::make_unique<FlyNoWay>();
}

void ModelDuck::Display()
{
    printf("I'm a model duck\n");
}
