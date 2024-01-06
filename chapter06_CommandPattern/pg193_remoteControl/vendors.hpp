#ifndef VENDORS_HPP
#define VENDORS_HPP

/*
* FILE DESCRIPTION:
* This file contains a few classes to implement "electronics" that will be controlled by the remote.
* The methods are purposefully named differently and do not follow an interface to help show the benefit of 
* the command pattern.
*/

class OutdoorLight
{
public:
    void on();
    void off();
};

class CeilingFan
{
public:
    void high();
    void medium();
    void low();
    void off();
};

class Sprinkler
{
public:
    void waterOn();
    void waterOff();
};

#endif // VENDORS_HPP