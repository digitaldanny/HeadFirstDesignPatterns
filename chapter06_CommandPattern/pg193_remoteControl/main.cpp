#include <iostream>
#include "vendors.hpp"
#include "VendorCommands.hpp"
#include "RemoteControl.hpp"

int main()
{
    std::cout << "Starting test program!" << std::endl;

    // Initialize all commands on remote to be empty at first
    RemoteControl remoteControl;

    // Assign the first three vendor commands..
    OutdoorLight outdoorLight;
    CommandOutdoorLightOn commandOutdoorLightOn(&outdoorLight);
    CommandOutdoorLightOff commandOutdoorLightOff(&outdoorLight);
    remoteControl.setCommand(0, &commandOutdoorLightOn, &commandOutdoorLightOff);

    remoteControl.listDevices();

    // Start pressing buttons and see what happens..
    for (int slot = 0; slot < remoteControl.getMaxCommands(); slot++)
    {
        remoteControl.onButtonPressed(slot);
        remoteControl.offButtonPressed(slot);
    }

    // Press the ceiling fan buttons a few times to make sure the state changes

    return 0;
}