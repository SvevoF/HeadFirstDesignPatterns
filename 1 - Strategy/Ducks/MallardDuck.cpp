#pragma once

#include <string>
#include "MallardDuck.h"

MallardDuck::MallardDuck() 
{
    quackBehavior = std::make_unique<QuackSound>();
    flyBehavior = std::make_unique<FlyWithWings>();
}

void MallardDuck::Display()
{
    printf("I'm a real Mallard duck\n");
}