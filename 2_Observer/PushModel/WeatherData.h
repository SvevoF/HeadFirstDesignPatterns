#pragma once

#include <vector>
#include <string>
#include <list>

#include "interfaces/Subject.h"

class WeatherData : public Subject {
public:
    WeatherData();
    ~WeatherData();

    void RegisterObserver(Observer* observer);

    void RemoveObserver(Observer* observer);
    void NotifyObservers();

    void SetMeasurements(float temperature, float humidity, float pressure);

    float GetTemperature() const { return m_temperature; }
    float GetHumidity() const { return m_humidity; }
    float GetPressure() const { return m_pressure; }

    bool MeasurementsChanged();

private:
    std::list<Observer*> m_observers;
    float m_temperature{0.0f};
    float m_humidity{0.0f};
    float m_pressure{0.0f};
};