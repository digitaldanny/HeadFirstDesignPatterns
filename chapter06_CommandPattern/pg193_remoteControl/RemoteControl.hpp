#ifndef REMOTE_CONTROL_HPP
#define REMOTE_CONTROL_HPP

#include "VendorCommands.hpp"

#include <iostream>

#define NUM_COMMANDS 7

class RemoteControl
{
private:
    Command* nullCommand;
    Command* onCommands[NUM_COMMANDS];
    Command* offCommands[NUM_COMMANDS];
public:
    RemoteControl();
    void setCommand(uint32_t slot, Command* onCommand, Command* offCommand);
    void onButtonPressed(uint32_t slot) { this->onCommands[slot]->execute(); }
    void offButtonPressed(uint32_t slot) { this->offCommands[slot]->execute(); }
    void listDevices(void);
};

RemoteControl::RemoteControl()
{
    std::cout << "Calling remote control constructor" << std::endl;
    for (int i = 0; i < 7; i++)
    {
        this->setCommand(i, nullCommand, nullCommand);
    }
}

void RemoteControl::setCommand(uint32_t slot, Command* onCommand, Command* offCommand) 
{
    this->onCommands[slot] = onCommand;
    this->offCommands[slot] = offCommand;
}

void RemoteControl::listDevices()
{
    for (int i = 0; i < NUM_COMMANDS; i++)
    {
        std::cout << "Slot: " << i << ", ON: " << onCommands[i]->getClassName() << ", OFF: " << offCommands[i]->getClassName() << std::endl;
    }
}

#endif // REMOTE_CONTROL_HPP