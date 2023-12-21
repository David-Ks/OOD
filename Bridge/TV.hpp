#pragma once

#include "Device.hpp"

class TV : public Device
{
public:
    void powerOn() const override 
    {
        std::cout << "TV is ON." << std::endl;
    }

    void powerOff() const override 
    {
        std::cout << "TV is OFF." << std::endl;
    }

    void setChannel( int channel ) const override
    {
        std::cout << "TV channel set to " << channel << "." << std::endl;
    }
};
