#include "ColorRegistry.hpp"

ColorRegisrty::ColorRegisrty()
{
    colors.push_back( std::make_unique< RedColor >() );
    colors.push_back( std::make_unique< BlueColor >() );
}

std::unique_ptr< Color > ColorRegisrty::findColor( COLOR c )
{
    for ( const auto& color : colors )
    {
        if ( color->getColor() == c )
        {
            return color->clone();
        }
    }
    
    return nullptr;
}
