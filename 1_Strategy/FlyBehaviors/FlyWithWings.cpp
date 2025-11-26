#pragma once

#include <stdio.h>
#include "../interfaces/FlyBehavior.h"

class FlyWithWings : public FlyBehavior
{
public:
    void Fly() override
    {
        printf("I'm flying with wings!\n");
    }
};