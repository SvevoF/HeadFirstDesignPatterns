#pragma once

#include <stdio.h>
#include "../interfaces/FlyBehavior.h"

class FlyRocketPowered : public FlyBehavior
{
public:
    void Fly() override
    {
        printf("I'm flying with a rocket!\n");
    }
};