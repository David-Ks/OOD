#pragma once

#include "Device.hpp"

#include <memory>

class RemoteControl 
{
protected:
    std::shared_ptr< Device > device;

public:
    RemoteControl( std::shared_ptr< Device > device ) : device( device ) {}
    virtual void togglePower() const = 0;
    virtual void setChannel(int channel) const = 0;
};
