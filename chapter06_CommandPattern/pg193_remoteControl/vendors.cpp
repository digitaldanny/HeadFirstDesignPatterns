#include "vendors.hpp"

#include <iostream>

// OUTDOOR LIGHT
void OutdoorLight::on() {std::cout << "OutdoorLight ON" << std::endl; }
void OutdoorLight::off() {std::cout << "OutdoorLight OFF" << std::endl; }

// CEILING FAN
void CeilingFan::high() { std::cout << "CeilingFan: High" << std::endl; }
void CeilingFan::medium() { std::cout << "CeilingFan: Medium" << std::endl; }
void CeilingFan::low() { std::cout << "CeilingFan: Low" << std::endl; }
void CeilingFan::off() { std::cout << "CeilingFan: Off" << std::endl; }

// SPRINKLER
void Sprinkler::waterOn() { std::cout << "Sprinkler: Water On" << std::endl; }
void Sprinkler::waterOff() { std::cout << "Sprinkler: Water Off" << std::endl; }