#pragma once

#include <stdio.h>
#include "../interfaces/FlyBehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
    void Fly() override
    {
        printf("I can't fly\n");
    }
};