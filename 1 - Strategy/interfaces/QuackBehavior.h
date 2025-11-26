// ## Interface for Quack Behavior ##

#pragma once

class QuackBehavior
{
public:
    virtual ~QuackBehavior() = default;
    virtual void Quack() = 0;
};