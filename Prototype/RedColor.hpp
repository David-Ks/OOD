#ifndef RED_COLOR_HPP
#define RED_COLOR_HPP

#include "Color.hpp"

class RedColor : public Color
{
public:
    RedColor();
    ~RedColor() = default;

public:
    COLOR getColor() const override;
    std::unique_ptr< Color > clone() const override;

private:
    COLOR color;
};

#endif // RED_COLOR_HPP