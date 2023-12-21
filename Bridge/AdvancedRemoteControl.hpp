#pragma once

#include "RemoteControl.hpp"

class AdvancedRemoteControl : public RemoteControl
{
public:
    AdvancedRemoteControl( std::shared_ptr< Device > device ) : RemoteControl( device ) {}

    void togglePower() const override 
    {
        device->powerOn();
    }

    void setChannel( int channel ) const override
    {
        device->setChannel( channel );
        std::cout << "Advanced features enabled." << std::endl;
    }
};