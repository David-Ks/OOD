#pragma once

#include "Device.hpp"

class Radio : public Device
{
public:
    void powerOn() const override 
    {
        std::cout << "Radio is ON." << std::endl;
    }

    void powerOff() const override 
    {
        std::cout << "Radio is OFF." << std::endl;
    }

    void setChannel( int channel ) const override 
    {
        std::cout << "Radio frequency set to " << channel << " MHz." << std::endl;
    }
};