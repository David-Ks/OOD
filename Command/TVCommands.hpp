#pragma once

#include "Command.hpp"
#include "TV.hpp"

class TurnOnCommand : public Command {
private:
    TV& tv;

public:
    TurnOnCommand(TV& tv) : tv(tv) {}
    void execute() override { tv.turnOn(); }
};

class TurnOffCommand : public Command {
private:
    TV& tv;

public:
    TurnOffCommand(TV& tv) : tv(tv) {}
    void execute() override { tv.turnOff(); }
};

class IncreaseVolumeCommand : public Command {
private:
    TV& tv;

public:
    IncreaseVolumeCommand(TV& tv) : tv(tv) {}
    void execute() override { tv.increaseVolume(); }
};

class DecreaseVolumeCommand : public Command {
private:
    TV& tv;

public:
    DecreaseVolumeCommand(TV& tv) : tv(tv) {}
    void execute() override { tv.decreaseVolume(); }
};
