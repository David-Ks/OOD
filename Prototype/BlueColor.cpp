#include "BlueColor.hpp"

BlueColor::BlueColor()
    : color( COLOR::BLUE )
{}

std::unique_ptr< Color > BlueColor::clone() const
{
    return std::make_unique< BlueColor >( *this );
}

COLOR BlueColor::getColor() const
{
    return color;
}