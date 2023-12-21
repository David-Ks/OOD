#include "ConcreteStates.hpp"
#include "Fan.hpp"
#include <iostream>

void OffState::handle(Fan& fan) {
    std::cout << "Turning fan OFF." << std::endl;
    fan.setState(nullptr);
}

void LowState::handle(Fan& fan) {
    std::cout << "Setting fan speed to LOW." << std::endl;
    fan.setState(new MediumState());
}

void MediumState::handle(Fan& fan) {
    std::cout << "Setting fan speed to MEDIUM." << std::endl;
    fan.setState(new HighState());
}

void HighState::handle(Fan& fan) {
    std::cout << "Setting fan speed to HIGH." << std::endl;
    fan.setState(new OffState());
}
