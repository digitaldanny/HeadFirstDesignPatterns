#ifndef WEATHER_DATA_HPP
#define WEATHER_DATA_HPP

#include "Subject.hpp"
#include "Observer.hpp"

#include <list>

using std::list;

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                      WEATHER DATA CLASS DEC
+-----+-----+-----s+-----+-----+-----+-----+-----+-----+-----+-----+
*/

class WeatherData : public ISubject
{
private:
    list<IObserver*> observerList = {}; // Linked list of registered observers

    // Best practice would be to define units of temp/hum/pres in var name, 
    // but I am ignoring that here since I am not even using real values for this ex. :)
    float temperature = 0.0f;
    float humidity = 0.0f;
    float pressure = 0.0f;

public:
    // ISubject overrides
    void registerObserver(IObserver* observer) override;
    void removeObserver(IObserver* observer) override;  
    void notifyObservers(void) override;

    // WeatherData Getters - Observers pull the information they need after an update
    float getTemperature(void);
    float getHumidity(void);
    float getPressure(void);

    void setMeasurements(float temperature, float pressure, float humidity);
};

#endif // WEATHER_DATA_HPP