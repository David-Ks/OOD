#pragma once

#include "RemoteControl.hpp"

class BasicRemoteControl : public RemoteControl 
{
public:
    BasicRemoteControl( std::shared_ptr< Device > device ) : RemoteControl( device ) {}

    void togglePower() const override 
    {
        device->powerOn();
    }

    void setChannel( int channel ) const override 
    {
        device->setChannel( channel);
    }
};
