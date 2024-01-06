#include "vendors.hpp"

#include <iostream>

// +-----+-----+-----+-----+-----+-----+-----+-----+
// OUTDOOR LIGHT
// +-----+-----+-----+-----+-----+-----+-----+-----+
void OutdoorLight::on() {std::cout << "OutdoorLight ON" << std::endl; }
void OutdoorLight::off() {std::cout << "OutdoorLight OFF" << std::endl; }

// +-----+-----+-----+-----+-----+-----+-----+-----+
// CEILING FAN
// +-----+-----+-----+-----+-----+-----+-----+-----+
CeilingFan::CeilingFan() { this->state = OFF; }
CeilingFanState CeilingFan::getState() { return this->state; }

void CeilingFan::high() 
{ 
    this->state = HIGH;
    std::cout << "CeilingFan: High" << std::endl; 
}

void CeilingFan::medium() 
{ 
    this->state = MED;
    std::cout << "CeilingFan: Medium" << std::endl; 
}

void CeilingFan::low() 
{ 
    this->state = LOW;
    std::cout << "CeilingFan: Low" << std::endl; 
}

void CeilingFan::off() 
{ 
    this->state = OFF;
    std::cout << "CeilingFan: Off" << std::endl; 
}

// +-----+-----+-----+-----+-----+-----+-----+-----+
// SPRINKLER
// +-----+-----+-----+-----+-----+-----+-----+-----+
void Sprinkler::waterOn() { std::cout << "Sprinkler: Water On" << std::endl; }
void Sprinkler::waterOff() { std::cout << "Sprinkler: Water Off" << std::endl; }