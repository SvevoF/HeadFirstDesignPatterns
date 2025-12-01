#include <stdio.h>

#include "WeatherData.h"
#include "WeatherData.cpp"
#include "Displays/CurrentConditionsDisplay.cpp"
#include "Displays/HeatIndexDisplay.cpp"

int main()
{
    WeatherData weatherData;

    CurrentConditionsDisplay currentDisplay(&weatherData);
    HeatIndexDisplay heatIndexDisplay(&weatherData);

    weatherData.SetMeasurements(80, 65, 30.4f);
    weatherData.SetMeasurements(82, 70, 29.2f);
    weatherData.SetMeasurements(78, 90, 29.2f);

    return 0;
}