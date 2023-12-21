#pragma once

#include "PenDecorator.hpp"

class LargeSize : public PenDecorator 
{
public:
    LargeSize( std::shared_ptr< Pen > pen ) : PenDecorator( pen ) {}

    std::string write() const override 
    {
        return PenDecorator::write() + ", and it's large-sized";
    }
};
