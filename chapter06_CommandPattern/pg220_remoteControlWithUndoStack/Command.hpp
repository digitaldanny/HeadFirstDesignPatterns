#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>

class Command
{
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual std::string getClassName() = 0;
};

#endif // COMMAND_HPP