#pragma once

#include <iostream>
#include "Observer.hpp" 

class ConcreteObserver : public Observer {
public:
    void update() override {
        std::cout << "ConcreteObserver received an update." << std::endl;
    }
};
