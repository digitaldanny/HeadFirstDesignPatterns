#ifndef VENDORS_HPP
#define VENDORS_HPP

/*
* FILE DESCRIPTION:
* This file contains a few classes to implement "electronics" that will be controlled by the remote.
* The methods are purposefully named differently and do not follow an interface to help show the benefit of 
* the command pattern.
*/

#include <iostream>

class OutdoorLight
{
public:
    void on() {std::cout << "OutdoorLight ON" << std::endl; }
    void off() {std::cout << "OutdoorLight OFF" << std::endl; }
};

class CeilingFan
{
public:
    void high() { std::cout << "CeilingFan: High" << std::endl; }
    void medium() { std::cout << "CeilingFan: Medium" << std::endl; }
    void low() { std::cout << "CeilingFan: Low" << std::endl; }
    void off() { std::cout << "CeilingFan: Off" << std::endl; }
};

class Sprinkler
{
public:
    void waterOn() { std::cout << "Sprinkler: Water On" << std::endl; }
    void waterOff() { std::cout << "Sprinkler: Water Off" << std::endl; }
};

#endif // VENDORS_HPP