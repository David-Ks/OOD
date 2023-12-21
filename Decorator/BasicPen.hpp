#pragma once

#include "Pen.hpp"

class BasicPen : public Pen
{
public:
    std::string write() const override 
    {
        return "Basic pen writes in black";
    }
};
