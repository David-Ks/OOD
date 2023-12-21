#pragma once

#include "PenDecorator.hpp"

class RedInk : public PenDecorator
{
public:
    RedInk( std::shared_ptr< Pen > pen ) : PenDecorator( pen ) {}

    std::string write() const override 
    {
        return PenDecorator::write() + ", but with red ink";
    }
};
