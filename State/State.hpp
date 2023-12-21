#pragma once

class Fan;

class State {
public:
    virtual ~State() {}
    virtual void handle(Fan& fan) = 0;
};
