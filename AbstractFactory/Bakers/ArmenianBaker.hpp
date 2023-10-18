#ifndef ARMENIAN_BAKER_HPP
#define ARMENIAN_BAKER_HPP

#include "Baker.hpp"

class ArmenianBaker : public Baker
{
public:
    std::unique_ptr< Pizza > bakeNeaplitanPizza() const override;
    std::unique_ptr< Pizza > bakeSicilianPizza() const override;
};

#endif // ARMENIAN_BAKER_HPP