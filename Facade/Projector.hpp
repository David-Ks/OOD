#pragma once

#include <iostream>
#include <string>

class Projector {
public:
    void on() 
    {
        std::cout << "Projector is ON" << std::endl;
    }

    void setInput( std::string input ) 
    {
        std::cout << "Setting input to: " << input << std::endl;
    }

    void off() 
    {
        std::cout << "Projector is OFF" << std::endl;
    }
};
