/*
* FILE DESCRIPTION:
* This file contains the Subject Interface for the Observer Pattern.
*/

#ifndef SUBJECTS_HPP
#define SUBJECTS_HPP

#include "Observer.hpp" // IObserver

/*
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                        SUBJECT INTERFACE
+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

class ISubject
{
public:
    virtual void registerObserver(IObserver* observer) = 0;  // Observer uses this handle to register for updates
    virtual void removeObserver(IObserver* observer) = 0;    // Observer uses this handle to stop being updated
    virtual void notifyObservers(void) = 0;                  // Subject calls this when new data is available.
};

#endif // SUBJECTS_HPP