#ifndef BLUE_COLOR_HPP
#define BLUE_COLOR_HPP

#include "Color.hpp"

class BlueColor : public Color
{
public:
    BlueColor();
    ~BlueColor() = default;

public:
    COLOR getColor() const override;
    std::unique_ptr< Color > clone() const override;

private:
    COLOR color;
};

#endif // BLUE_COLOR_HPP