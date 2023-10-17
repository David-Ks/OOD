#include "RedColor.hpp"


RedColor::RedColor()
    : color( COLOR::RED )
{}

std::unique_ptr< Color > RedColor::clone() const
{
    return std::make_unique< RedColor >( *this );
}

COLOR RedColor::getColor() const
{
    return color;
}