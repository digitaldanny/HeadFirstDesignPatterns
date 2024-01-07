#ifndef REMOTE_CONTROL_HPP
#define REMOTE_CONTROL_HPP

#include <stack>

#include "VendorCommands.hpp"

#define REMOTE_CONTROL_MAX_COMMANDS 7

class RemoteControl
{
private:
    NullCommand nullCommand;
    Command* onCommands[REMOTE_CONTROL_MAX_COMMANDS];
    Command* offCommands[REMOTE_CONTROL_MAX_COMMANDS];
    std::stack<Command*> commandHistory;
public:
    RemoteControl();
    void setCommand(uint32_t slot, Command* onCommand, Command* offCommand);
    void onButtonPressed(uint32_t slot);
    void offButtonPressed(uint32_t slot);
    void listDevices(void);
    int getMaxCommands();

    bool isHistoryEmpty();
    void undoLastCommand();
};

#endif // REMOTE_CONTROL_HPP