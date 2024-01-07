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
    if (slot >= REMOTE_CONTROL_MAX_COMMANDS)
    {
        std::cout << "Slot assignment request exceeded max number of command slots" << std::endl;
        return;
    }

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

void RemoteControl::onButtonPressed(uint32_t slot) 
{ 
    Command* command = this->onCommands[slot];
    commandHistory.push(command);
    command->execute(); 
}

void RemoteControl::offButtonPressed(uint32_t slot) 
{ 
    Command* command = this->offCommands[slot];
    commandHistory.push(command);
    command->execute(); 
}

bool RemoteControl::isHistoryEmpty()
{
    return !(commandHistory.size());
}

void RemoteControl::undoLastCommand()
{
    if (isHistoryEmpty())
    {
        return;
    }

    Command* commandLastExecuted = commandHistory.top();
    commandHistory.pop();
    commandLastExecuted->undo();
}

int RemoteControl::getMaxCommands() { return REMOTE_CONTROL_MAX_COMMANDS; }