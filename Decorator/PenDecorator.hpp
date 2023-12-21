#pragma once

#include "Pen.hpp"

#include <memory>

class PenDecorator : public Pen
{
protected:
    std::shared_ptr< Pen > pen;

public:
    PenDecorator( std::shared_ptr< Pen > pen ) : pen( pen ) {}

    std::string write() const override
    {
        return pen->write();
    }
};
