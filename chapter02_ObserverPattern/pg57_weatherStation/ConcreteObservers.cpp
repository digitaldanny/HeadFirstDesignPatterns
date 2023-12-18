/*
* This file contains definitions for the Concrete Observers.
*
* NOTE: 
* The ThirdPartyDisplay, ForecastDisplay, and other display classes from the README diagram are not included.
* Only two displays (Temperature / Pressure) are defined because I believe that is sufficient to test the functionality
* of the Observer/Subject relationship. 
*/

#include "ConcreteObservers.hpp"
#include <iostream>

using std::cout;
using std::endl;


TemperatureDisplay::TemperatureDisplay(WeatherData* w)
{
    this->weatherData = w;
    this->weatherData->registerObserver(this);
}

void TemperatureDisplay::update()
{
    cout << "StatisticsDisplay::update - Temperature = " << this->weatherData->getTemperature() << endl;
}



PressureDisplay::PressureDisplay(WeatherData* w)
{
    this->weatherData = w;
    this->weatherData->registerObserver(this);
}

void PressureDisplay::update()
{
    cout << "StatisticsDisplay::update - Pressure = " << this->weatherData->getPressure() << endl;
}

void PressureDisplay::unsubscribeFromWeatherData()
{
    this->weatherData->removeObserver(this);
}