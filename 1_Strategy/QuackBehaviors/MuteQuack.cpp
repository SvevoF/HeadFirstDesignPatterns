#pragma once

#include <stdio.h>
#include "../interfaces/QuackBehavior.h"

class MuteQuack : public QuackBehavior 
{
public:

    void Quack() override
    {
        printf("<< Silence >>\n");
    }
};
