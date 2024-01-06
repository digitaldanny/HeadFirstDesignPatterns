#include <iostream>
#include "vendors.hpp"
#include "RemoteControl.hpp"

int main()
{
    std::cout << "Test!" << std::endl;

    // Initialize all commands on remote to be empty at first
    RemoteControl remoteControl;

//    // Assign the first three vendor commands..
//    OutdoorLight outdoorLight;
//    CommandOutdoorLightOn commandOutdoorLightOn(&outdoorLight);
//    CommandOutdoorLightOff commandOutdoorLightOff(&outdoorLight);
//    remoteControl.setCommand(0, &commandOutdoorLightOn, &commandOutdoorLightOff);
//
    remoteControl.listDevices();
//
//    // Start pressing buttons and see what happens..
//    remoteControl.onButtonPressed(0);
//    remoteControl.offButtonPressed(0);

    return 0;
}