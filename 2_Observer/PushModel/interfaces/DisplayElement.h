#pragma once

class DisplayElement
{
public:
    virtual ~DisplayElement() = default;
    virtual void Display() = 0;
};