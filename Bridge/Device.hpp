#pragma once

#include <iostream>

class Device 
{
public:
    virtual ~Device() {}
    virtual void powerOn() const = 0;
    virtual void powerOff() const = 0;
    virtual void setChannel( int channel ) const = 0;
};
