#include "WeatherData.hpp"

#include <iostream>

using std::cout;
using std::endl;

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                    WEATHER DATA CLASS DEFINITIONS
+-----+-----+-----s+-----+-----+-----+-----+-----+-----+-----+-----+
*/

void WeatherData::registerObserver(IObserver* observer)
{
    observerList.push_back(observer);
    cout << "WeatherData::registerObserver - numEntries= " << observerList.size() << endl;
}

void WeatherData::removeObserver(IObserver* observer)
{
    observerList.remove(observer);
    cout << "WeatherData::removeObserver - numEntries= " << observerList.size() << endl;
}

void WeatherData::notifyObservers()
{
    for (auto o : this->observerList)
    {
        o->update();
    }
}

float WeatherData::getTemperature() { return this->temperature; }
float WeatherData::getHumidity()    { return this->humidity; }
float WeatherData::getPressure()    { return this->pressure; }

void WeatherData::setMeasurements(float temperature, float pressure, float humidity)
{
    this->temperature = temperature;
    this->pressure = pressure;
    this->humidity = humidity;
}