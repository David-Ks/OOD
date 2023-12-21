#include "Fan.hpp"

#include "ConcreteStates.hpp"

Fan::Fan() {
    currentState = new OffState();  // Initial state is OFF
}

Fan::~Fan() {
    delete currentState;
}

void Fan::setState(State* state) {
    delete currentState;  // Clean up the current state
    currentState = state; // Set the new state
}

void Fan::handle() {
    if (currentState) {
        currentState->handle(*this);
    }
}
