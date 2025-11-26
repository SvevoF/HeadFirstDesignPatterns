#pragma once

#include <stdio.h>
#include "../interfaces/QuackBehavior.h"

class Squeak : public QuackBehavior
{
public:

    void Quack() override
    {
        printf("Squeak\n");
    }
};