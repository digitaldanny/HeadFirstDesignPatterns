#include <iostream>
#include "vendors.hpp"
#include "VendorCommands.hpp"
#include "RemoteControl.hpp"

/*
EXPECTED OUTPUT:

Starting test program!
Calling remote control constructor

Expectation #1 Assign the first three vendor commands..s
Slot assignment request exceeded max number of command slots
SLOT      ON                            OFF                           
0         CommandOutdoorLightOn         CommandOutdoorLightOff        
1         NullCommand                   NullCommand                   
2         NullCommand                   NullCommand                   
3         CeilingFanOn                  CeilingFanOff                 
4         NullCommand                   NullCommand                   
5         NullCommand                   NullCommand                   
6         CommandSprinklerOn            CommandSprinklerOff           

Expectation #2: Press on/off buttons. Expectation is that NullCommands do not output anything, but the valid commands have a print statement.
Pressing on/off once for each device..
OutdoorLight ON
OutdoorLight OFF
CeilingFan: Low
CeilingFan: Off
Sprinkler: Water On
Sprinkler: Water Off

Expectation #3: Undo all of the recently executed commands.. Should result in inverse of previous commands
Sprinkler: Water Off
Sprinkler: Water On
CeilingFan: Off
CeilingFan: Low
OutdoorLight OFF
OutdoorLight ON

Expectation #4: Press the ceiling fan buttons a few times to make sure the state changes
Testing state machine for the ceiling fan..
CeilingFan: Low
CeilingFan: Medium
CeilingFan: High
CeilingFan: Low
CeilingFan: Off
*/
int main()
{
    std::cout << "Starting test program!" << std::endl;

    // Initialize all commands on remote to be empty at first
    RemoteControl remoteControl;

    // Expectation #1:
    OutdoorLight outdoorLight;
    CommandOutdoorLightOn commandOutdoorLightOn(&outdoorLight);
    CommandOutdoorLightOff commandOutdoorLightOff(&outdoorLight);
    remoteControl.setCommand(0, &commandOutdoorLightOn, &commandOutdoorLightOff);

    CeilingFan ceilingFan;
    CommandCeilingFanOn commandCeilingFanOn(&ceilingFan);
    CommandCeilingFanOff commandCeilingFanOff(&ceilingFan);
    remoteControl.setCommand(3, &commandCeilingFanOn, &commandCeilingFanOff);

    Sprinkler sprinkler;
    CommandSprinklerOn commandSprinklerOn(&sprinkler);
    CommandSprinklerOff commandSprinklerOff(&sprinkler);
    remoteControl.setCommand(7, &commandSprinklerOn, &commandSprinklerOff); // try invalid assignment
    remoteControl.setCommand(6, &commandSprinklerOn, &commandSprinklerOff); // assignment to valid slot number

    remoteControl.listDevices();

    // Expectation #2:
    std::cout << "Pressing on/off once for each device.." << std::endl;
    for (int slot = 0; slot < remoteControl.getMaxCommands(); slot++)
    {
        remoteControl.onButtonPressed(slot);
        remoteControl.offButtonPressed(slot);
    }

    // Expectation #3:
    std::cout << "Undoing all recent commands.." << std::endl;
    while (!remoteControl.isHistoryEmpty())
    {
        remoteControl.undoLastCommand();
    }

    // Expectation #4:
    std::cout << "Testing state machine for the ceiling fan.." << std::endl;
    remoteControl.onButtonPressed(3); // off -> low
    remoteControl.onButtonPressed(3); // low -> med
    remoteControl.onButtonPressed(3); // med -> high
    remoteControl.onButtonPressed(3); // high -> low
    remoteControl.offButtonPressed(3); // low -> off

    return 0;
}