#pragma once

#include "../interfaces/Observer.h"
#include "../interfaces/DisplayElement.h"
#include "../interfaces/Subject.h"
#include "../WeatherData.h"
#include <iostream>

class HeatIndexDisplay : public Observer, public DisplayElement
{
public:
    HeatIndexDisplay(Subject* weatherData)
    {
        this->m_weatherData = weatherData;
        weatherData->RegisterObserver(this);
    }

    void Update(float temp, float humidity, float pressure)
    {
        m_HeatIndex = computeHeatIndex(temp, humidity);
        Display();
    }

    void Display() override
    {
        std::cout << "Heat index is " << m_HeatIndex << std::endl;
    }

private:

    double computeHeatIndex(float t, float rh)
    {
        return (double)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) 
            + (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) 
            + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
            (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 * 
                (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) + 
            (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
            0.000000000843296 * (t * t * rh * rh * rh)) - (0.0000000000481975 * (t * t * t * rh * rh * rh)));
    }
    
    Subject* m_weatherData;
    double m_HeatIndex{0.0f};

};