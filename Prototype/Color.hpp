#ifndef COLOR_HPP
#define COLOR_HPP

#include <memory>

enum class COLOR
{
    RED,
    BLUE
};

class Color
{
public:
    virtual ~Color() {}
    virtual COLOR getColor() const = 0;
    virtual std::unique_ptr< Color > clone() const = 0;
};

#endif // COLOR_HPP