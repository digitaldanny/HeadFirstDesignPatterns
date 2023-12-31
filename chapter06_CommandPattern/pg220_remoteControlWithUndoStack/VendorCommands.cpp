#include "VendorCommands.hpp"

#include <iostream>

// +-----+-----+-----+-----+-----+-----+-----+-----+
// NULL COMMAND
// +-----+-----+-----+-----+-----+-----+-----+-----+
void NullCommand::execute() {}
void NullCommand::undo() {}
std::string NullCommand::getClassName() {return std::string("NullCommand"); }


// +-----+-----+-----+-----+-----+-----+-----+-----+
// OUTDOOR LIGHT COMMANDS
// +-----+-----+-----+-----+-----+-----+-----+-----+
CommandOutdoorLightOn::CommandOutdoorLightOn(OutdoorLight* light) { this->light = light; }
void CommandOutdoorLightOn::execute() { light->on(); }
void CommandOutdoorLightOn::undo() { light->off(); }
std::string CommandOutdoorLightOn::getClassName() {return std::string("CommandOutdoorLightOn"); }

CommandOutdoorLightOff::CommandOutdoorLightOff(OutdoorLight* light) { this->light = light; }
void CommandOutdoorLightOff::execute() { light->off(); }
void CommandOutdoorLightOff::undo() { light->on(); }
std::string CommandOutdoorLightOff::getClassName() {return std::string("CommandOutdoorLightOff"); }


// +-----+-----+-----+-----+-----+-----+-----+-----+
// CEILING FAN COMMANDS
// +-----+-----+-----+-----+-----+-----+-----+-----+
CommandCeilingFanOn::CommandCeilingFanOn(CeilingFan* fan) { this->fan = fan; }
std::string CommandCeilingFanOn::getClassName() { return std::string("CeilingFanOn"); }

void CommandCeilingFanOn::execute() 
{
    switch (this->fan->getState())
    {
        case OFF:
            this->fan->low();
            break;
        case LOW:
            this->fan->medium();
            break;
        case MED:
            this->fan->high();
            break;
        case HIGH:
            this->fan->low();
            break;
        default:
            while(1); // not implemented, trap cpu
    };
}

void CommandCeilingFanOn::undo() 
{  
    // TODO - would require a stack of fan states for one than one revert..
    std::cout << "Undo not implemented for ceiling fan" << std::endl;
}

CommandCeilingFanOff::CommandCeilingFanOff(CeilingFan* fan) { this->fan = fan; }
std::string CommandCeilingFanOff::getClassName() { return std::string("CeilingFanOff"); }
void CommandCeilingFanOff::execute() { this->fan->off(); }

void CommandCeilingFanOff::undo() 
{  
    // TODO - would require a stack of fan states for one than one revert..
    std::cout << "Undo not implemented for ceiling fan" << std::endl;
}

// +-----+-----+-----+-----+-----+-----+-----+-----+
// SPRINKLER COMMANDS
// +-----+-----+-----+-----+-----+-----+-----+-----+

CommandSprinklerOn::CommandSprinklerOn(Sprinkler* sprinkler) { this->sprinkler = sprinkler; }
void CommandSprinklerOn::execute() { this->sprinkler->waterOn(); }
void CommandSprinklerOn::undo() { this->sprinkler->waterOff(); }
std::string CommandSprinklerOn::getClassName() { return std::string("CommandSprinklerOn"); }

CommandSprinklerOff::CommandSprinklerOff(Sprinkler* sprinkler) { this->sprinkler = sprinkler; }
void CommandSprinklerOff::execute() { this->sprinkler->waterOff(); }
void CommandSprinklerOff::undo() { this->sprinkler->waterOn(); }
std::string CommandSprinklerOff::getClassName() { return std::string("CommandSprinklerOff"); }