#pragma once

#include <iostream>

class TV {
public:
    void turnOn() { std::cout << "TV is ON." << std::endl; }
    void turnOff() { std::cout << "TV is OFF." << std::endl; }
    void increaseVolume() { std::cout << "Volume increased." << std::endl; }
    void decreaseVolume() { std::cout << "Volume decreased." << std::endl; }
};
