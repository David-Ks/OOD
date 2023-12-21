#pragma once

#include "State.hpp"

class OffState : public State {
public:
    void handle(Fan& fan) override;
};

class LowState : public State {
public:
    void handle(Fan& fan) override;
};

class MediumState : public State {
public:
    void handle(Fan& fan) override;
};

class HighState : public State {
public:
    void handle(Fan& fan) override;
};
