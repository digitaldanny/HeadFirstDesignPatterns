#include "RemoteControl.hpp"

#include <iostream>
#include <iomanip>

RemoteControl::RemoteControl()
{
    std::cout << "Calling remote control constructor" << std::endl;
    for (int i = 0; i < 7; i++)
    {
        this->setCommand(i, &nullCommand, &nullCommand);
    }
}

void RemoteControl::setCommand(uint32_t slot, Command* onCommand, Command* offCommand) 
{
    this->onCommands[slot] = onCommand;
    this->offCommands[slot] = offCommand;
}

void RemoteControl::listDevices()
{
    const int widthSlot = 10;
    const int widthCmd = 30;
    
    std::cout << std::left << std::setw(widthSlot) << "SLOT"
        << std::left << std::setw(widthCmd) << "ON"
        << std::left << std::setw(widthCmd) << "OFF" << std::endl;

    for (int i = 0; i < REMOTE_CONTROL_MAX_COMMANDS; i++)
    {
        std::cout << std::left << std::setw(widthSlot) << i 
            << std::left << std::setw(widthCmd) << onCommands[i]->getClassName() 
            << std::left << std::setw(widthCmd) << offCommands[i]->getClassName() << std::endl;
    }
}

void RemoteControl::onButtonPressed(uint32_t slot) { this->onCommands[slot]->execute(); }
void RemoteControl::offButtonPressed(uint32_t slot) { this->offCommands[slot]->execute(); }
int RemoteControl::getMaxCommands() { return REMOTE_CONTROL_MAX_COMMANDS; }