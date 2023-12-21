#pragma once

#include "State.hpp"

class Fan {
private:
    State* currentState;

public:
    Fan();
    ~Fan();

    void setState(State* state);
    void handle();
};
