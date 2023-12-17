/*
* FILE DESCRIPTION:
* This file contains the Observer Interfacea and Concrete Observer class declarations.
* 
* NOTE: 
* The ThirdPartyDisplay and ForecastDisplay classes from the README diagram are not included.
* Only the CurrentConditionsDisplay and StatisticsDisplay classes are defined because 
* I believe that is sufficient to test the functionality of the Observer/Subject relationship. 
*/

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                        OBSERVER INTERFACE
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

class IObserver
{
public:
    virtual void update() = 0; // Subject calls this handle to notify Observer that an update is ready
};

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                        CONCRETE OBSERVERS
+-----+-----+-----s+-----+-----+-----+-----+-----+-----+-----+-----+
*/

/*
* CLASS DESCRIPTION: CurrentConditionsDisplay
*
* TODO
*/
class CurrentConditionsDisplay : public IObserver
{
public:
    void update() override;
};

/*
* CLASS DESCRIPTION: StatisticsDisplay
*
* TODO
*/
class StatisticsDisplay : public IObserver
{
public:
    void update() override;
};