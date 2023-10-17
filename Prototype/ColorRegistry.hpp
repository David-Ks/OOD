#ifndef COLOR_REGISRSTY_HPP
#define COLOR_REGISRSTY_HPP

#include "RedColor.hpp"
#include "BlueColor.hpp"

#include <vector>

class ColorRegisrty
{
    using Colors = std::vector< std::unique_ptr<Color> >;
public:
    ColorRegisrty();
    std::unique_ptr< Color > findColor( COLOR );

private:
    Colors colors;
};

#endif // COLOR_REGISRSTY_HPP