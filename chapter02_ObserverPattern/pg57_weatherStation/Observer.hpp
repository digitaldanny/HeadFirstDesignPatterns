/*
* FILE DESCRIPTION:
* This file contains the Observer Interface for the Observer Pattern.
*/

#ifndef OBSERVER_HPP
#define OBSERVER_HPP

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

#endif // OBSERVER_HPP