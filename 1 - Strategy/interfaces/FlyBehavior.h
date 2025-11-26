// ## Interface for Fly Behavior ##

#pragma once

class FlyBehavior
{
public:
    virtual ~FlyBehavior() = default;
    virtual void Fly() = 0;
};