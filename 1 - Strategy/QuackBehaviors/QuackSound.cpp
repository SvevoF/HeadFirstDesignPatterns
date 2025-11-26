#pragma once

#include <stdio.h>
#include "../interfaces/QuackBehavior.h"

class QuackSound : public QuackBehavior
{
public:

    void Quack() override
    {
        printf("Quack\n");
    }
};