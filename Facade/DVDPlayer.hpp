#pragma once

#include <iostream>
#include <string>

class DVDPlayer 
{
public:
    void on()
    {
        std::cout << "DVD Player is ON" << std::endl;
    }

    void play( std::string movie )
    {
        std::cout << "Playing movie: " << movie << std::endl;
    }

    void off() 
    {
        std::cout << "DVD Player is OFF" << std::endl;
    }
};
