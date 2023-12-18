#include <iostream>

#include "WeatherData.hpp"
#include "ConcreteObservers.hpp"

using std::cout;
using std::endl;

/*
EXPECTED OUTPUT:

WeatherData::registerObserver - numEntries= 1   <-- 1.
WeatherData::registerObserver - numEntries= 2
StatisticsDisplay::update - Temperature = 50    <-- 2.
StatisticsDisplay::update - Pressure = 100
WeatherData::removeObserver - numEntries= 1     <-- 3.
StatisticsDisplay::update - Temperature = 1     <-- 4.
Main program complete!
*/
int main()
{
    // Subject
    WeatherData weatherData = WeatherData();

    // 1. Object init - Will also automatically register the subject
    // Expecting output from the WeatherData Subject saying two objects have registered
    TemperatureDisplay temperatureDisplay = TemperatureDisplay(&weatherData);
    PressureDisplay pressureDisplay = PressureDisplay(&weatherData);

    // 2. Change the measurements and notify observers which will automatically trigger output from both observers
    weatherData.setMeasurements(50.0f, 100.0f, 150.0f);
    weatherData.notifyObservers();

    // 3. Unregister Pressure observer - expecting output from WeatherData Subject saying
    // an observer unregistered.
    pressureDisplay.unsubscribeFromWeatherData();

    // 4. Change the measurements, only expecting output from the Temperature observer
    // now that Pressure observer has unregistered.
    weatherData.setMeasurements(1.0f, 2.0f, 3.0f);
    weatherData.notifyObservers();

    cout << "Main program complete!" << endl;
}