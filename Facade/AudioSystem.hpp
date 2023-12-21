#pragma once

#include <iostream>

class AudioSystem 
{
public:
    void on() 
    {
        std::cout << "Audio System is ON" << std::endl;
    }

    void setVolume( int volume ) 
    {
        std::cout << "Setting volume to: " << volume << std::endl;
    }

    void off() 
    {
        std::cout << "Audio System is OFF" << std::endl;
    }
};
