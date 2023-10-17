#include <iostream>

#include "ColorRegistry.hpp"

int main()
{
    ColorRegisrty registry;
    std::unique_ptr< Color > red = registry.findColor( COLOR::RED );
    std::cout << "Is it RED color? : " << ( red->getColor() == COLOR::RED ) << std::endl; 
    return 0;
}