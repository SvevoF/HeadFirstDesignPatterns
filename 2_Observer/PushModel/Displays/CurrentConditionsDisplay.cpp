#pragma once

#include "../interfaces/Observer.h"
#include "../interfaces/DisplayElement.h"
#include "../interfaces/Subject.h"
#include "../WeatherData.h"
#include <iostream>

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:

    CurrentConditionsDisplay(Subject* weatherData)
    {
        this->m_weatherData = weatherData;
        weatherData->RegisterObserver(this);
    }

    void Update(float temperature, float humidity, float pressure) override
    {
        this->m_temperature = temperature;
        this->m_humidity = humidity;
        Display();
    }

    void Display() override
    {
        std::cout << "Current conditions: " << m_temperature << "F degrees and " << m_humidity << "% humidity" << std::endl;
    }

private:

    float m_temperature;
    float m_humidity;
    Subject* m_weatherData;
};