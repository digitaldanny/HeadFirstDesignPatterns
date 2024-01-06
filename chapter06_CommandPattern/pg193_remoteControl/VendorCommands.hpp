#ifndef VENDOR_COMMANDS_HPP
#define VENDOR_COMMANDS_HPP

#include "vendors.hpp"
#include "Command.hpp"

// NULL COMMAND
class NullCommand : public Command
{
public:
    void execute() {}
    std::string getClassName() {return std::string("NullCommand"); }
};

// OUTDOOR LIGHT
class CommandOutdoorLightOn : public Command
{
private:
    OutdoorLight* light;
public:
    CommandOutdoorLightOn(OutdoorLight* light) { this->light = light; }
    void execute() { light->on(); }
    std::string getClassName() {return std::string("CommandOutdoorLightOn"); }
};

class CommandOutdoorLightOff : public Command
{
private:
    OutdoorLight* light;
public:
    CommandOutdoorLightOff(OutdoorLight* light) { this->light = light; }
    void execute() { light->off(); }
    std::string getClassName() {return std::string("CommandOutdoorLightOff"); }
};


// CEILING FAN - Implements a state machine

// SPRINKLER

#endif // VENDOR_COMMANDS_HPP