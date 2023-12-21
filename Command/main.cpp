#include "TV.hpp"
#include "TVCommands.hpp"
#include "RemoteControl.hpp"

int main() {
    TV myTV;

    TurnOnCommand turnOnCmd(myTV);
    TurnOffCommand turnOffCmd(myTV);
    IncreaseVolumeCommand increaseVolumeCmd(myTV);
    DecreaseVolumeCommand decreaseVolumeCmd(myTV);

    RemoteControl remote;

    remote.setCommand(&turnOnCmd);
    remote.pressButton();

    remote.setCommand(&increaseVolumeCmd);
    remote.pressButton();

    remote.setCommand(&decreaseVolumeCmd);
    remote.pressButton();

    remote.setCommand(&turnOffCmd);
    remote.pressButton();

    return 0;
}
