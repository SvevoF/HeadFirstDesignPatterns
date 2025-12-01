#pragma once

class Observer
{
public:
    virtual ~Observer() = default;
    virtual void Update(float temperature, float humidity, float pressure) = 0;
};