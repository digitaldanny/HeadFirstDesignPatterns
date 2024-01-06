#ifndef VENDOR_COMMANDS_HPP
#define VENDOR_COMMANDS_HPP

#include "vendors.hpp"
#include "Command.hpp"

// NULL COMMAND
class NullCommand : public Command
{
public:
    void execute();
    std::string getClassName();
};

// OUTDOOR LIGHT
class CommandOutdoorLightOn : public Command
{
private:
    OutdoorLight* light;
public:
    CommandOutdoorLightOn(OutdoorLight* light);
    void execute();
    std::string getClassName();
};

class CommandOutdoorLightOff : public Command
{
private:
    OutdoorLight* light;
public:
    CommandOutdoorLightOff(OutdoorLight* light);
    void execute();
    std::string getClassName();
};


// CEILING FAN - Implements a state machine

// SPRINKLER

#endif // VENDOR_COMMANDS_HPP