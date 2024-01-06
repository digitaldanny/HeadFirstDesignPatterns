#include "VendorCommands.hpp"

// NULL COMMAND
void NullCommand::execute() {}
std::string NullCommand::getClassName() {return std::string("NullCommand"); }

// OUTDOOR LIGHT COMMANDS
CommandOutdoorLightOn::CommandOutdoorLightOn(OutdoorLight* light) { this->light = light; }
void CommandOutdoorLightOn::execute() { light->on(); }
std::string CommandOutdoorLightOn::getClassName() {return std::string("CommandOutdoorLightOn"); }

CommandOutdoorLightOff::CommandOutdoorLightOff(OutdoorLight* light) { this->light = light; }
void CommandOutdoorLightOff::execute() { light->off(); }
std::string CommandOutdoorLightOff::getClassName() {return std::string("CommandOutdoorLightOff"); }

// CEILING FAN COMMANDS

// SPRINKLER COMMANDS