#pragma once

#include "Command.hpp"

class RemoteControl {
private:
    Command* command;

public:
    void setCommand(Command* cmd) { command = cmd; }
    void pressButton() { command->execute(); }
};
