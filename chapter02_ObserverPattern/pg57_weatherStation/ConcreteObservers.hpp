
/*
* FILE DESCRIPTION:
* This file contains Concrete Observer class prototypes.
*/

#include "Observer.hpp"
#include "WeatherData.hpp"

#ifndef CONCRETE_OBSERVERS_HPP
#define CONCRETE_OBSERVERS_HPP

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                        CONCRETE OBSERVERS
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

class TemperatureDisplay : public IObserver
{
private:
    WeatherData* weatherData = nullptr; // handle to weatherData for registration
public:
    TemperatureDisplay(WeatherData* w);

    // IObserver overrides
    void update() override;
};

class PressureDisplay : public IObserver
{
private:
    WeatherData* weatherData = nullptr; // handle to weatherData for registration
public:
    PressureDisplay(WeatherData* w);
    void unsubscribeFromWeatherData();  // Only using this for PressureDisplay

    // IObserver overrides
    void update() override;
};

#endif // CONCRETE_OBSERVERS_HPP