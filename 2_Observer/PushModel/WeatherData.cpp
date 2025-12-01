#include "interfaces/Subject.h"
#include "WeatherData.h"
#include <algorithm>

WeatherData::WeatherData()
{
    m_observers = std::list<Observer*>();
};

WeatherData::~WeatherData()
{
    m_observers.clear();
};

void WeatherData::RegisterObserver(Observer* observer)
{
    m_observers.push_back(observer);
}

void WeatherData::RemoveObserver(Observer* observer)
{
    auto it = std::find(m_observers.begin(), m_observers.end(), observer);
    if (it != m_observers.end())
    {
        m_observers.erase(it);
    }
}

void WeatherData::NotifyObservers()
{
    for (auto observer : m_observers)
    {
        observer->Update(m_temperature, m_humidity, m_pressure);
    }
}

bool WeatherData::MeasurementsChanged()
{
    NotifyObservers();
    return true; // Placeholder for actual change detection logic
}

void WeatherData::SetMeasurements(float temperature, float humidity, float pressure) 
{
    this->m_temperature = temperature;
    this->m_humidity = humidity;
    this->m_pressure = pressure;
    MeasurementsChanged();
}
