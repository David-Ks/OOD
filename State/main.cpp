#include "Fan.hpp"
#include "ConcreteStates.hpp"

int main() {
    Fan fan;

    fan.handle();
    fan.handle();

    fan.setState(new LowState());
    fan.handle();

    fan.setState(new MediumState());
    fan.handle();

    fan.setState(new HighState());
    fan.handle();

    fan.handle();

    return 0;
}
