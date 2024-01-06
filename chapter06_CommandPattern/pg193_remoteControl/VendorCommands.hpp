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
class CommandCeilingFanOn : public Command
{
private:
    CeilingFan* fan;
public:
    CommandCeilingFanOn(CeilingFan* fan);
    void execute();
    std::string getClassName();
};

class CommandCeilingFanOff : public Command
{
private:
    CeilingFan* fan;
public:
    CommandCeilingFanOff(CeilingFan* fan);
    void execute();
    std::string getClassName();
};

// SPRINKLER
class CommandSprinklerOn : public Command
{
private:
    Sprinkler* sprinkler;
public:
    CommandSprinklerOn(Sprinkler* sprinkler);
    void execute();
    std::string getClassName();
};

class CommandSprinklerOff : public Command
{
private:
    Sprinkler* sprinkler;
public:
    CommandSprinklerOff(Sprinkler* sprinkler);
    void execute();
    std::string getClassName();
};

#endif // VENDOR_COMMANDS_HPP