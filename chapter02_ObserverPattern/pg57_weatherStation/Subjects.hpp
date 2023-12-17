/*
* FILE DESCRIPTION:
* This file contains the Subject Interface and Concrete Subject class declarations.
*/

#include "Observer.hpp" // IObserver

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                        SUBJECT INTERFACE
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

class ISubject
{
public:
    virtual void registerObserver(IObserver &observer) = 0;  // Observer uses this handle to register for updates
    virtual void removeObserver(IObserver &observer) = 0;    // Observer uses this handle to stop being updated
    virtual void notifyObservers(void) = 0;                  // Subject calls this when new data is available.
};

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                        CONCRETE SUBJECTS
+-----+-----+-----s+-----+-----+-----+-----+-----+-----+-----+-----+
*/

class WeatherData : public ISubject
{
public:
    // Subject
    void registerObserver(IObserver &observer) override;
    void removeObserver(IObserver &observer) override;  
    void notifyObservers(void) override;

    // WeatherData       
};